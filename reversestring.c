/* Description  :  Write a program to reverse a string entered by the user without using string library functions. Display the reversed string
 * Author       :   Keerthana G Pillai
 * Version      :   1.0
 * Date         :   19-02-2025
*/




#include<stdio.h>
int main(){
  char str1[20];
  printf("Enter a string: ");
  fgets(str1,sizeof(str1),stdin);
  int l;
  for (l=0;str1[l]!='\0';l++);
  int i=l-1,j;
  for(j=0;j<l/2;j++){
    char temp=str1[i];
    str1[i]=str1[j];
    str1[j]=temp;
    i--;
  }
  printf("reversed string is: ");
  puts(str1);
  return 0;
}
