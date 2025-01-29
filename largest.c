#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("Number1 is the largest\n");
        } else {
            printf("Number3 is the largest\n");
        }
    } else {
        if (num2 >= num3) {
            printf("Number2 is the largest\n");
        } else {
            printf("Number3 is the largest\n");
        }
    }

    return 0;
}
