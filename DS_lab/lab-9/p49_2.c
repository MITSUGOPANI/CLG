#include "stdio.h"
#include "stdlib.h"

void main ()
{
    int n ;
    printf("give the size of arry");
    scanf("%d",&n);

    char *arr = (char *)malloc(n*sizeof(char));
    for (int i = 0; i < n; i++)
    {
        scanf("%c",arr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c",*(arr+i));
        printf("\n");
    }
    free(arr);
    
}