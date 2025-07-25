#include<stdio.h>

    int main(){
        
        printf("Enter First Matrix : \n");

        int m1[2][2],m2[2][2],sumOfMatrix[2][2];
        for (int i = 0; i < 2; i++)
        {

            for (int j = 0;  j< 2; j++)
            {
            
                 printf("m1[%d %d] : ",i,j);
                 scanf("%d",&m1[i][j]);
            }
       
        }
        
        printf("Enter second matrix : \n");

         for (int i = 0; i < 2; i++)
        {

            for (int j = 0;  j< 2; j++)
            {
            
                 printf("m2[%d %d] : ",i,j);
                 scanf("%d",&m2[i][j]);
            }
       
        }

        printf("sum of the matrix \n");

            for (int i = 0; i < 2; i++)
        {

            for (int j = 0;  j< 2; j++)
            {
            
               sumOfMatrix[i][j]= m1[i][j] +  m2[i][j];
            }
       
        }



            for (int i = 0; i < 2; i++)
        {

            for (int j = 0;  j< 2; j++)
            {
                printf("%d   ",sumOfMatrix[i][j]);
            }
            printf("\n");
       
        }
        


    return 0;
}