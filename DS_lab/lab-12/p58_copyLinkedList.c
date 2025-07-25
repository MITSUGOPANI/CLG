#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *link;
};

    struct Node*first = NULL;
    struct Node*copy = NULL;

    void insertAtFirst(){
        struct Node*newNode =(struct Node*)malloc(sizeof(struct Node));

        if (first ==NULL)
        {
            newNode = first;
        }
        
    printf("Enter value of newNode");
    scanf("%d",&newNode->info);
    };




int main(){



    return 0;
}