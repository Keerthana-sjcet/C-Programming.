/* Write a C Program to check if a given number is a strong number or not. A
strong number is a number in which the sum of the factorial of the digits is
equal to the number itself.
Eg:- 145=1!+4!+5!=1+24+120=145
*/

#include <stdio.h>

int main()
{
    int i, originalNum, num, lastDigit, sum,factorial=1;
    long fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    originalNum = num;
    sum = 0;
    while(num > 0)
    {
        lastDigit = num % 10;
        while (num>0){
        factorial =factorial*num;
        num=num-1;
        sum = sum + fact;
        num = num / 10;
    }

    if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }

    return 0;
}
