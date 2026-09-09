#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    // Ask the user for the number of terms
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    // Loop to calculate the sum of the first n even numbers
    for (i = 1; i <= n; i++) {
        // 2 * i generates consecutive even numbers (2, 4, 6, 8...)
        sum += (2 * i);
    }

    // Print the final result
    printf("The sum of the first %d even numbers is: %d\n", n, sum);

    return 0;
}
