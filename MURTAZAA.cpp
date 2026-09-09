#include <stdio.h>

int main() {
    int n;
    long long sum = 0; // Using long long to prevent integer overflow for larger inputs

    // Input the value of n
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // Method 1: Using a mathematical formula O(1)
    sum = (long long)n * n;

    printf("The sum of the first %d odd numbers is: %lld\n", n, sum);

    return 0;
}
