#include <stdio.h>

int main() {
  float weight;
  int value;
  printf("Enter your weight in pounds: \n");
  scanf("%f", &weight);
  // Platinum is $1770 / pound
  // 14.5 troy ounces in 1 pound
  value = 1770.0 * weight * 14.5;
  
  printf ("Your weight in platinum costs $%d (integer). \n", value);

   char character = value & 0xFF;
    printf("Interpreted as a character: %c\n", character);//For question 5
    
    printf("As octal: %o, as hexadecimal: %x\n", value, value);
}
//1. The total amount was 4234725.00
//2. TThe output was much more accurate when the weight was in decimal form
//3. $%.2f was changed to $%.4f
//4. For %f the ouput was a bunch of random characters since 'printf' is trying to read the int as a float 
//   For %d the ouput was a correct but the answer waqs rounded down to the nerest integer and outputed as a whole number
//5. Printing 4232025 as a character using %c will not work as expected because the char data type can only represent values from 0 to 255