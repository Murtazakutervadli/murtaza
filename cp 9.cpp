#include <stdio.h>

int main() {
    float rupees, dollars, exchange_rate;

    // Set the current exchange rate (e.g., 1 USD = 85.00 INR)
    exchange_rate = 85.00;

    // Get input from user
    printf("Enter amount in Rupees (INR): ");
    scanf("%f", &rupees);

    // Convert rupees to dollars
    dollars = rupees / exchange_rate;

    // Display the result
    printf("1 USD = %.2f INR\n", exchange_rate);
    printf("%.2f Rupees is equal to %.2f Dollars ($)\n", rupees, dollars);

    return 0;
}
