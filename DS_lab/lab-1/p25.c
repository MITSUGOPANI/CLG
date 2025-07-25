#include <stdio.h>

int main(){

    int n;
     printf("give me a number");
     scanf("%d",&n);

     int arr[n];

     printf("Enter elements :");
     for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
     }

     int pos;
     printf("Enter pos. ");
     scanf("%d",&pos);

     if (pos>0 && pos<n)
     {
        for (int i = pos; i<n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        
     }
     
 

     for(int i=0; i<n-1 ; i++){
        printf("%d\n",arr[i]);
     }

}