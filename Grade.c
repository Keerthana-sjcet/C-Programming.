/* Description  :   C program  to accept a grade and declare the equivalent description

 * Author       :   Keerthana G Pillai
 * Version      :   1.0
 * Date         :   26-01-2025
*/

#include<stdio.h>

int main() {

  char grade;
  printf("\n Enter grade");
  scanf("\n%s",&grade);
  if (grade=='E'){
    printf("\n Excellent");
  }

  else if (grade=='V') {

    printf("\n Very Good");
  }

  else if (grade =='G')  {

    printf("\n Good");
 }
  else if(grade=='A')

  {

    printf("\n Average");

  }

  else{

    printf("\n Fail");

  }

  return 0;

}
