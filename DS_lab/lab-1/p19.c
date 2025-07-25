#include <stdio.h>

int main(){

    int n;
    int min = 0;
    int max = 0;
    int maxPos =0;
    int minPos =0;


     printf("enter array number");

    scanf("%d",&n);

    int arr[n];
   
sqw1
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++){

          if(arr[i-1]<arr[i]){
            min = arr[i-1];
             minPos=i+1;
        }

        if(arr[i-1]>arr[i]){
            max = arr[i-1];
            maxPos=i-1;
        }

      
     
    }

    printf("%d",minPos);
    printf("%d\n",maxPos);
 

return 0;

}