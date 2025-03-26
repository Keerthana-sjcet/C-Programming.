#include<stdio.h>
#define Pi 3.14159
int main(){
  float r,h;
  printf("Enter radius");
  scanf("%f",&r);
  printf("Enter height");
  scanf("%f",&h);
  float areaofcircle=Pi*r*r;
  printf("Area of circle is %f",areaofcircle);
  float areaofcylinder=2*Pi*r*(r+h);
  printf("\nArea of cylinder is %f",areaofcylinder);
  return 0;
}
  
