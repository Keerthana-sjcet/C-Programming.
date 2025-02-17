
#include <stdio.h>

int main() {
    int age1, age2, age3;
    int youngest = age1;
    printf("Enter ages of the three: ");
    scanf("%d %d %d", &age1, &age2, &age3);
    youngest = age1;
    if(age2 < youngest) {
        youngest = age2;
    }
    if(age3 < youngest) {
        youngest = age3;
    }
    printf("Youngest age: %d\n", youngest);
    return 0;
}
