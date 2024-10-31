#include <stdio.h>

main(){
    int input;
    printf("Enter a number: ");//For the user to insert a number 
    scanf("%d", &input);//User inputs a number

    printf("Your number is: '%c'", (char)input);//Typecasting into a character
    return 0;
}