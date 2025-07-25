#include <stdio.h>

int fact(int a);

int main(){

    

    int a=5;
    int b=fact(a);

    printf("%d",b);

    return 0;
}  

int fact(int a){
    if( a==0||a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
    
}
