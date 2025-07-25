#include <stdio.h>

int main(){

    int n;
     printf("give me a number");
     scanf("%d",&n);

     int arr[n+1];

     printf("Enter elements :");
     for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
     }

     int pos;
     printf("Enter pos. ");
     scanf("%d",&pos);

     if (pos>0 && pos<n)
     {
        for (int i = n; i>pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
     }
     
     int value;

     printf("Enter Number = ");
     scanf("%d",&value);

     arr[pos] = value;

     for(int i=0; i<=n ; i++){
        printf("%d\n",arr[i]);
     }

}