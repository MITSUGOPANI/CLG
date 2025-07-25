#include<stdio.h>

int s[6];
int top = 0;

void push(char x){
    if (top > 6)
    {
        printf("stack is overflow");
    }
    else{
        top++;
        s[top] = x;
    }
    
}


char pop(){
     if (top <0)
    {
        printf("stack is underflow");
    }
    else{
        top--;
        return s[top+1];
    }
    return '\0';
}


char peep(int i){
     if (top-i>= 6)
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

//p35.c

void ricognize(char str[])
{
    int i = 0;
    s[0] = 'c';
    //char ch =str[i];
    while (str[i] != 'c' && i<6)
    {
        
        
            push(str[i]);
            i++;
        
        // else if (str[i]== 'c')
        // {
        //     i++;
        //     continue;
        // }
    }
       if (str[i] != 'c') {
        printf("Invalid format: no center 'c'\n");
        return;
    }
    i++;
     while (str[i] != '\0'){
            if(top<0){
                printf("invalid");
                return;
            }
            char ch1 = str[i];
            char ch2 = pop();
            if (ch1 != ch2)
            {
                printf("ricognize is invalid");
                return;
                
            }
        
        i++;
    }
  
       if (top == -1)
        printf("Ricognize is valid\n");
    else
        printf("Ricognize is invalid\n");
}
    


    int main(){
        char str[6] = "abcba";
        ricognize(str);
       
    

    // display();

    // printf("deleted element = ");
    //    for (int i = 10; i>=1; i--)
    //    {
    //     int x ;
    //     x= pop();
    //     printf("%c ",x);
           
    // }

    return 0;
}