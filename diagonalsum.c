/*
Name: Keerthana 
Date: 07-02-2025
Purpose: Program to find sum of diagonal elements.
*/

#include<stdio.h>
int main(){
    int i,j ,sum=0,row,column;
    printf("Enter no of rows: ");
    scanf("%d",&row);
    printf("Enter no of columns: ");
    scanf("%d",&column);
    int matrix[row][column];
    printf("Enter elements:\n");
    for(i=0;i<row;i++){
        for (j=0;j<column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for (j=0;j<column;j++){
            if (i==j){
                sum+=matrix[i][j];
            }
        }
    }
  printf("The matrix is\n");
   for (i=0;i<row;i++){
      for (j=0;j<column;j++){
          printf("%d\t",matrix[i][j]);
      }
      printf("\n");
  }
  printf(" The sum of diagonal elements is %d:",sum);

  return 0;
}
    
    
