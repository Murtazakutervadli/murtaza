#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter the number of terms
    printf("Enter the value of N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("The first %d odd numbers are:\n", n);

    // Loop runs exactly N times to print N odd numbers
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }

    printf("\n");
    return 0;
}

