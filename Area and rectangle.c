/* Description  :   C Program to check which of area and perimeter of a rectangle is greater

 * Author       :   Keerthana G Pillai
 * Version      :   1.0
 * Date         :   28-01-2025
*/

#include<stdio.h>

int main() {

  int length, breadth,area,perimeter;

  printf("\n Enter length & breadth");

  scanf("\n%d%d",&length,&breadth);

  area=length*breadth;
  perimeter=2*(length+breadth);
  if(area>perimeter) {
        printf("\n%d%d area of the rectangle is greater than perimeter");

  }
  else {

        printf("\n perimeter of the rectangle is greater than area");

  }

  return 0;

}
