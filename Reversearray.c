/* Description  :   C Program to reverse an array

 * Author       :   Keerthana G Pillai
 * Version      :   1.0
 * Date         :   8-8-2025
*/
#include<stdio.h>
int main()
{
  int n,I;
  printf("Enter  how many elements");
  scanf(" %d",&n);
  int number[n];
  printf ("enter elements");
  for (I=0;I<n;I++){
      scanf("%d", &number[n-I-1]);
      
  }
  printf ("Reversed araray is :\n");
  for (I=0;I<n;I++){
      printf("%d\t", number[I]);
      
  }
  return 0;
}
      


