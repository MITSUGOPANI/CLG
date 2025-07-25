#include <stdio.h>

int main(){
    

    int a= 1234;
    int rev = 0;

    while(a!=0){
        int rem = a%10;
        a = a/10;
        rev = rev*10 + rem % 10;
    }

    printf("%d",rev);

    return 0 ;
}