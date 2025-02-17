/* Description  :   C Program to find sum of digits of number
 * Author       :   Keerthana G Pillai
 * Version      :   1.0
 * Date         :   27-01-2025
*/
#include <stdio.h>

int main() {
    int num,rem, sum=0;
    printf ("enter");
    scanf("%d", &num);
    while( num>0){
        rem=num%10;
        sum=sum+rem;
        num=(int) num/10;
    }
    printf("%d",sum);
    return 0;
}
