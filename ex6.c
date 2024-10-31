#include <stdio.h>

#define TOTAL_ENTRIES 10       // Total number of inputs
#define EXCHANGE_RATE 0.92     // Exchange rate: 1 USD = 0.92 EUR (When last checked)

void convertDollarsToEuros(double dollars);//Double since cash can also be inn decimal form 

int main() {
    double dollars[TOTAL_ENTRIES];//Stroing 

    // Get 10 inputs from the user
    printf("Enter %d amounts in dollars to convert to euros:\n", TOTAL_ENTRIES);
    for (int i = 0; i < TOTAL_ENTRIES; i++) {//This will repeat 10 times because of TOTAL_ENTRIES
        printf("Amount %d (USD): ", i + 1);
        scanf("%lf", &dollars[i]);
    }

    printf("\nConversion of USD to EUR:\n");

    // Loop to convert each input and display the result
    for (int i = 0; i < TOTAL_ENTRIES; i++) {//The amount of entries depend on the total entries (In this case being 10)
        convertDollarsToEuros(dollars[i]);
    }

    return 0;
}

// Function to convert dollars to euros and print the result
void convertDollarsToEuros(double dollars) {
    double euros = dollars * EXCHANGE_RATE;//Grabs the amount entered bu the user(dollars) and multiplies it with the rate of euros (0.92)
    printf("%.2f USD = %.2f EUR\n", dollars, euros);//2 decimal places 
}