/* . Find Maximum and Minimum: Write a program to input elements into a one-dimensional array.
find the maximum and minimum elements. 
Display their positions in the array.
*/
#include<stdio.h>
int main(){
    int i,j, n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter elements of the array %d:",n);
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (i=0;i<n-1;i++){
      for (j=0;j<n-i;j++){
         
       if(array[j]>array[j+1]){
         int temp=array[j];
         array[j]=array[j+1];
         array[j+1]=temp;
       }
     }
   }
   printf("sorted array is\t");
   for (i=0;i<n;i++){
      printf("%d \t",array[i]);
   }
   return 0;
}
