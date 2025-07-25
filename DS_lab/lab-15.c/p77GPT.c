#include <stdio.h>
#include <stdlib.h>

// Doubly Linked List Node
struct Node {
    int x;
    struct Node *prev;
    struct Node *next;
};

// Function to create a new node
struct Node *CreateNewNode(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->x = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Insert at the beginning
void insertAtFirst(struct Node **head, int Data) {
    struct Node *newNode = CreateNewNode(Data);

    if (*head != NULL) {
        (*head)->prev = newNode;
        newNode->next = *head;
    }
    *head = newNode;
}

// Insert at the end
void insertAtLast(struct Node **head, int x) {
    struct Node *newNode = CreateNewNode(x);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *first = *head;

    while (first->next != NULL) {
        first = first->next;
    }

    first->next = newNode;
    newNode->prev = first;
}

// Delete from specific position
void deleteFromSpecifiedPosition(struct Node **head, int pos) {
    if (*head == NULL || pos <= 0) {
        printf("Invalid position\n");
        return;
    }

    struct Node *temp = *head;

    // Deleting first node
    if (pos == 1) {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return;
    }

    // Traverse to position
    for (int i = 1; temp != NULL && i < pos; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
}

// Display function
void display(struct Node *head) {
    struct Node *save = head;

    while (save != NULL) {
        printf("%d <-> ", save->x);
        save = save->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    insertAtFirst(&head, 10);
    insertAtFirst(&head, 20);
    insertAtLast(&head, 5);
    insertAtLast(&head, 1);

    printf("List after insertion:\n");
    display(head);

    deleteFromSpecifiedPosition(&head, 2);

    printf("List after deleting position 2:\n");
    display(head);

    return 0;
}
