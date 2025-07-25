#include <stdio.h>

int main(){
    int n = 5;
    int i = 0;
    int count=0;

    for (i=1;i<=n ; i++){

        if(n % i == 0){
            printf("%d",i);
            count++;
        }

    }

    if(count==2){
        printf("\n %d is prime number",n);

    }
    else{
        printf("\n %d is not prime number",n);
        
    }


    return 0;
}