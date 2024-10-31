#include <stdio.h>
#include <string.h>

int main(){
    char word1[100], word2[100], word3[100];//Storing the words in arrays 

    printf("Enter your first Word: ");//User enters their first word
    scanf("%s", word1);

    printf("Enter your second Word: ");//User enters their second word
    scanf("%s", word2);

    printf("Enter your third Word: ");//User enters their third word
    scanf("%s", word3);

    printf("Reversed words:");
    printf("\nFirst Word: ");
    reverseWord(word1);//Function to reverse the first word 

    printf("\nSecond Word: ");//Function to reverse the second word 
    reverseWord(word2);

    printf("\nThird Word: ");//Function to reverse the third word 
    reverseWord(word3);

}

void reverseWord(char words[]){//The function to reverse the words
    int length = strlen(words);//variable length will be the length of the String (Hence: strlen())

    for(int i = length--; i >= 0; i--){
        printf("%c", words[i]);//Output of the reversed words
    }
}