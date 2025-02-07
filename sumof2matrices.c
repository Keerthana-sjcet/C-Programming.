/*
Name: Keerthana 
Date: 07-02-2025
Purpose: Program to add two matrices
*/
#include<stdio.h>
int main(){
    int i,j ,sum=0,row,column;
    printf("Enter no of rows: ");
    scanf("%d",&row);
    printf("Enter no of columns: ");
    scanf("%d",&column);
    int matrix1[row][column];
    int matrix2[row][column]; 
    int matrix3[row][column];
    printf("Enter elements of matrix1:\n");
    for(i=0;i<row;i++){
        for (j=0;j<column;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter elements of matrix2:\n");
    for(i=0;i<row;i++){
        for (j=0;j<column;j++){
            scanf("%d",&matrix2[i][j]);       
         }
    }
    printf("First matrix is:\n");
    for(i=0;i<row;i++){
        for (j=0;j<column;j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is\n");
    for(i=0;i<row;i++){
        for (j=0;j<column;j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++){
        for (j=0;j<column;j++){
           matrix3[i][j]= matrix1[i][j]+ matrix2[i][j];
        }
   }
   printf("The final matrix is\n");
   for(i=0;i<row;i++){
        for (j=0;j<column;j++){
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n");
   }
   return 0;
}
