#include <stdio.h>

int main() {
    int i, j, n;

    // Taking array size input
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Taking array elements input
    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {  // Fixed condition here
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Printing sorted array
    printf("Sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
