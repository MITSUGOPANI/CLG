#include "stdio.h"
#include "stdlib.h"

void main ()
{
    int n ;
    printf("give the size of arry");
    scanf("%d",&n);

    float *arr = (float *)malloc(n*sizeof(float));
    for (int i = 0; i < n; i++)
    {
        scanf("%f",arr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%f",*(arr+i));
        printf("\n");
    }
    free(arr);
    
}