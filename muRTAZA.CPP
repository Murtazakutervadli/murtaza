#include <stdio.h>

int main() {
    int n, i;

    // Ask the user to enter the value of N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);

    // Loop from 1 to N and print each number
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
