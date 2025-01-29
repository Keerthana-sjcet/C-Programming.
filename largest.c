#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("\nEnter three numbers");
  scanf("%d%d%d",&num1,&num2,&num3);
  if (num1>num2){
     if (num2 >num3){
            printf("Number1 is the largest");
     }
     else if (num3>num2){
            if (num1<num3) {
                printf("number3 is largest");
            }
     }
   }             
   else{
      if (num2 >num3){
            printf("Number2 is the largest");
   }
      else if (num3>num2){
            
            printf("number3 is largest");
     }
  }
  return 0;
}


```
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("Number1 is the largest\n");
        } else {
            printf("Number3 is the largest\n");
        }
    } else {
        if (num2 >= num3) {
            printf("Number2 is the largest\n");
        } else {
            printf("Number3 is the largest\n");
        }
    }

    return 0;
}
```
