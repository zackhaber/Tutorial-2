#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Get user input
    printf("Enter a non-negative integer to find its factorial: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {//In case 0 is inputted because you cant factorise by 0 or lower 
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        printf("Factorial of %d is %d\n", n, factorial(n));
    }

    return 0;
}

// Function to compute factorial
int factorial(int n) {
    if(n == 0){//Everytime we have a facotrial of 0, the result is always 1
        return 1;
    }
    else{
        return n * factorial(n - 1);// returns the numbers * the number - 1, this goes on until n is complete
    }
}