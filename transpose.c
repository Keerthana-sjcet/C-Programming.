/*
Name: Keerthana 
Date: 06-02-2025
Purpose: Program to set all leading diagonal elements to 0
#include <stdio.h>

int main() {
    // Declare matrices and variables
    int arr1[50][50], brr1[50][50], i, j, r, c;

    // Display transpose of a matrix
    printf("\n\nTranspose of a Matrix :\n");
    printf("---------------------------\n");

    // Input the rows and columns of the matrix
    printf("\nInput the rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    // Input elements in the first matrix
    printf("Input elements in the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < r; i++) {
        printf("\n");
        for (j = 0; j < c; j++)
            printf("%d\t", arr1[i][j]);
    }

    // Transpose of the matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            // Assigning transposed values to the new matrix
            brr1[j][i] = arr1[i][j];
        }
    }

    // Display the transpose of the matrix
    printf("\n\nThe transpose of a matrix is : ");
    for (i = 0; i < c; i++) {
        printf("\n");
        for (j = 0; j < r; j++) {
            printf("%d\t", brr1[i][j]);
        }
    }
    printf("\n\n");

    return 0;
}
*/
#include<stdio.h>
int main() {
  int row,column,i,j;
  printf("Enter no of rows and columns :");
  scanf("%d%d",&row,&column);
  int matrix[row][column];
  printf("Enter elements\n");
  for (i=0;i<row;i++){
      for (j=0;j<column;j++){
          scanf("%d",&matrix[i][j]);
      }
  }
  printf("The new matrix is\n");
  for (i=0;i<column;i++){
      for (j=0;j<row;j++){
          printf("%d\t",matrix[j][i]);
      }
      printf("\n");
  }

  return 0;
}
