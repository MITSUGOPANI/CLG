#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int x;
    struct Node *prev;
    struct Node *next;
};

struct Node *first = NULL;

struct Node *CreateNewNode(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->x = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
};

void insertAtFirst(struct Node *first, int x)
{
    struct Node *newNode = CreateNewNode(x);

    if (*first != NULL)
    {
        (*first)->prev = newNode;
        newNode->next = *first;
        *first = newNode;
    }
    else
    {
        *first = newNode;
    }
}

void insertAtLast(struct Node *first, int x)
{
    struct Node *newNode = CreateNewNode(x);

    

    if ((*first)->next == NULL)
    {
        newNode->prev = first;
        (*first)->next = newNode;

        return first;
    }

    while (first->next != NULL)
    {
        first = first->next;
    }

    first->next = newNode;
    newNode->prev = first;
}

void deleteFromSpecifiedPosition(struct Node *first, int pos)
{

    if (*first == NULL || pos <= 0)
    {
        printf("invalid position\n");
        return;
    }

    struct Node *first = first;
    struct Node *p = first->next;

    int count = 0;
    while (first->next != NULL)
    {
        first = first->next;
        count++;
    }

    if (pos == 1)
    {
        first->next = NULL;
        p->prev = NULL;
        free(first);
        return first;
    }
    else if (pos == count)
    {

        while (p->next != NULL)
        {
            p->prev = NULL;
            first->next = NULL;
            first->next = NULL;

            free(p);

            return;
        }
    }
    else
    {
        for (int i = 0; i <= (pos - 1); i++)
        {
            first = first->next;
            p = p->next;
        }
        first->next = p->next;
        p->prev = NULL;
        p->next = NULL;
        p->next->prev = first->next;
        free(p);
        return (first);
    }
}

void display()
{
    struct Node *save = first;

    while (save != NULL)
    {
        printf("%d <-> ", save->x);
        save = save->next;
    }
    printf("NULL\n");
}

int main()
{

    struct Node *first = NULL;

    insertAtFirst(&first, 10);
    insertAtFirst(&first, 20);
    insertAtLast(&first, 5);
    insertAtLast(&first, 1);

    printf("List after insertion:\n");
    display(first);

    deleteFromSpecifiedPosition(&first, 2);

    printf("List after deleting position 2:\n");
    display(first);

    return 0;

    return 0;
}