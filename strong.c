/* Write a C Program to check if a given number is a strong number or not. A
strong number is a number in which the sum of the factorial of the digits is
equal to the number itself.
Eg:- 145=1!+4!+5!=1+24+120=145
*/
#include <stdio.h>

int main() {
    int i, originalNum, num, lastDigit, sum = 0;
    long factorial;

    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        lastDigit = num % 10;
        factorial = 1;
        for (i = 1; i <= lastDigit; i++) {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        num = num / 10;
    }

    if (sum == originalNum) {
        printf("%d is STRONG NUMBER", originalNum);
    } else {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }

    return 0;
}

