#include "stdio.h"
#include "stdlib.h"

void main ()
{
    int n ;
    printf("give the size of arry");
    scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(arr+i));
        printf("\n");
    }
    free(arr);
    
}