#include<stdio.h>
int array1(int[],int);
int main(){
  int n;
  printf("Enter no of elements in array");
  scanf("%d",&n);
  int array[n];
  int sumarray=array1(array,n);
  printf("%d",sumarray);
  return 0;
}
  
int array1(int array[],int n){
  int sum=0;
  printf("Enter elements");
  for (int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  for (int i=0;i<n;i++){
      sum+=array[i];
  }
  return sum;
}
