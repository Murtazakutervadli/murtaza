
#include <stdio.h>

int main() {
    long long n, sum;

    // Prompt user for input
    printf("Enter a positive integer (n): ");
    if (scanf("%lld", &n) != 1 || n < 1) {
        printf("Error: Please enter a valid positive natural number.\n");
        return 1;
    }

    // Calculate sum using the formula: n * (n + 1) / 2
    sum = (n * (n + 1)) / 2;

    // Print the result
    printf("The sum of the first %lld natural numbers is: %lld\n", n, sum);

    return 0;
}
