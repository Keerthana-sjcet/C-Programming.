#include<stdio.h>
int main(){
  int number,factorial=1;
  printf("enter number");
  scanf("%d",&number);
  while (number>0){
    factorial =factorial*number;
    number=number-1;
  }
  printf("%d",factorial);
  return 0;
}   
