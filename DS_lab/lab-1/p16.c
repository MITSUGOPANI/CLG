#include <stdio.h>

int main(){


    int n;
    printf("enter number ");
    scanf("%d", &n);

    int arr[n];


    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

     printf("Array is ");
    
    for(int i=0;i<n;i++){
       
        printf("%d",arr[i]);
    }

   return 0;
}