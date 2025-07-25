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

struct Node* shortll(int x)
{

    struct Node *i = NULL;
    struct Node *j = NULL;
    // struct Node *next = curr->link;

    // while (curr != NULL)
    // {
    //     struct Node *save = first;
    //     while (save != NULL)
    //     {
    //         if (curr > save)
    //         {
    //             curr = save;
    //         }
    //         save = save->link
    //     }
    //     curr = next;
    // }
    
    for ( i = first; i != NULL; i = i->link)
    {
        for ( j = first->link; j != NULL ; j = j->link)
        {
            if (i->info>j->info)
            {
                int temp = i->info;
                i->info = j->info;
                j->info = temp;
            }
        }
        
    }
    
    
}
