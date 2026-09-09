#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the number of even terms they want to print
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d even numbers are:\n", n);

    // Loop runs N times to print the first N even numbers
    for (i = 1; i <= n; i++) {
        // Multiplying the loop counter by 2 yields consecutive even numbers (2, 4, 6, ...)
        printf("%d ", 2 * i);
    }

    printf("\n");
    return 0;
}

