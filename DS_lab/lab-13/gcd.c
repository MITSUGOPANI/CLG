#include "stdio.h"

int gcd (int a, int b){
    return (b==0)?a:gcd(b,a%b);
}
void main ()
{
   int x=  gcd(6,3);
   printf("%d",x);
}