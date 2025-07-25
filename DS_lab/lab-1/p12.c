#include <stdio.h>


int PrimeInterval(int s , int e);

int main(){


    int s = 1;
    int e = 10;
    int result = PrimeInterval(s , e);
    printf("The sum of factorials from %d to %d  \n",s,e);


    return 0;

}

int PrimeInterval(int s, int a){

    int i,j,count ;

    for(i=s; i<=e ; i++){
        count = 0;
        for(j=1;j<=1;j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count==2){
            printf("%d",i);
        }
    }

}