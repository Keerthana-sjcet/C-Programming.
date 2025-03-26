#include<stdio.h>
int power(int b,int e){
  
  if(e==0){
    return 1;
  }
  else{
    return b*power(b,e-1);
  }
}
int main(){
  int b,e;
  printf("Enter base");
  scanf("%d",&b);
  printf("Enter exponent");
  scanf("%d",&e);
  int a=power(b,e);
  printf("%d",a);
  return 0;
}
