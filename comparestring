/* Description  :  Create a program to input two strings and compare them using the strcmp() function. Display whether the strings are equal or not.
 * Author       :   Keerthana G Pillai
 * Version      :   1.0
 * Date         :   19-02-2025
*/


#include<stdio.h>
#include<string.h>
int main(){
  char str1[10],str2[10];
  int comp;
  printf("Enter first string: ");
  fgets(str1,sizeof(str1),stdin);
  printf("Enter second string: ");
  fgets(str2,sizeof(str2),stdin);
  comp=strcmp(str1,str2);
  if (strlen(str1)!= strlen(str2)){
    printf("Invalid input");
    return 0;
  }
  else{
    if (comp==0){
     printf("Both are equal"); 
    }
    else if (comp<0){
     printf("Second is greater");
    }
    else{
      printf("first is greater");    
    }
  }
  
  return 0;
}
  
