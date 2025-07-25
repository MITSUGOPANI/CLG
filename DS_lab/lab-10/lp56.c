#include "stdio.h"
#include "stdlib.h"

struct Node
{
    int info;
    struct node *link;
};

struct Node *first = NULL;
void insertAtFirst(int x)
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    if ( first == NULL ){
        first = newNode;
    }   
    else{
        newNode->info = x ; 
        newNode->link = first;
        first = newNode; 
    }

}

void insertAtN(int x)
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));

    if ( first == NULL ){
        first = newNode;
    }   
    else{
        struct Node *save = first;
        while (save != NULL)
        {
            save = save->link;
        }
        newNode->info = x ;  
        save -> link = newNode;
        
        
    }

}

void deleteAtN(int x)
{
    struct Node  *save = first;
    if ( first->info == x ){
        first->link = first;
    }   
    else{
        struct Node *pred = first;
        while (save->info != x)
        {
            pred = save;
            save->link = save;
        }
        pred->link = save->link;
        free(save);
    }
}

void count(int x)
{
    
}
