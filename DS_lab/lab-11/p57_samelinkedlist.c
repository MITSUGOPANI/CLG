#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *first = NULL;
struct Node *secoand = NULL;

void same()
{

    struct Node * save = first;
    struct Node * save2 = secoand;

    if (save == NULL && save2 == NULL)
    {
        printf("both like are same");
    }

    while (save!=NULL && save2!=NULL)
    {
        if (save->info != save2->info)
        {
            printf("both are not same");
        }
        else
        {
            save=save->link;
            save2=save2->link;
        }
        
        
    }
    
}

int main()
{

    return 0;
}