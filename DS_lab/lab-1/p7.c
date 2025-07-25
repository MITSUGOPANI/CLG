#include <stdio.h>

int p(int base , int power);

int main(){
    int a=5;
    int b= p(a,2);
    printf("%d",b);

    return 0;
}

int p(int base, int power){
    if(power == 0){
        return 1;
    }
    else
    {
        return base*p(base,power-1);
    }
    
}