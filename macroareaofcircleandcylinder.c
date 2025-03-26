#include<stdio.h>
#define Pi 3.14159
#define circle Pi*r*r
#define cylinder 2*Pi*r*(r+h)
int main(){
  float r,h;
  printf("Enter radius");
  scanf("%f",&r);
  printf("Enter height");
  scanf("%f",&h);
  printf("Area of circle is %f",circle);
  printf("\nArea of cylinder is %f",cylinder);
  return 0;
}
  
