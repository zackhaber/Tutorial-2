#include <stdio.h>
#include <math.h>//Math class to be able to perform math functions

int main(){
    double number, total;//Variables whcih will be used and their respective datatypes
    int iteration = 1;

    printf("Enter a number: ");//Enetr number to be used
    scanf("%lf", number);//long float 

    printf("Enter a number for iteration: ");//Number of iterations
    scanf("%lf", iteration);//long float 

    for(int i = 1; i <= iteration; i++){
        total += pow(i, -(number));//Working out the reimann zeta function
    }

    printf("You Answer is: %.10f", total);//Output in decimal form (10 decimal)

    return 0;
}