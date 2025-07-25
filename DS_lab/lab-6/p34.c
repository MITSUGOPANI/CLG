#include<stdio.h>
#define SIZE 100

int s[SIZE];
int top = -1;

void push(int x){
    if (top >= SIZE)
    {
        printf("stack is overflow");
    }
    else{
        top++;
        s[top] = x;
    }
    
}


int pop(){
     if (top >= SIZE)
    {
        printf("stack is underflow");
    }
    else{
        top--;
        return s[top+1];
    }
}


int peep(int i){
     if (top-i>= SIZE)
    {
        printf("stack is underflow");
    }
    else{
    }
    
}


void display(){

    for (int i = top; i >-1; i--)
    {
        printf("%d \n",s[i]);
    }
}

// //p35.c

// void ricognize(char string){
//     int 
// }

    int main(){

       for (int i = 10; i>=1; i--)
       {
        push(i);
    }

    display();

    printf("deleted element = ");
       for (int i = 10; i>=1; i--)
       {
        int x ;
        x= pop();
        printf("%d ",x);
           
    }

    return 0;
}