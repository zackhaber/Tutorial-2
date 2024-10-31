#include <stdio.h>

#define WEEK_DAYS 7// These are not reuired but you can simply switch them into their resepctive numbers in their resepctive locations inside the code 
#define TOTAL_ENTRIES 10

void converter(int days);

int main(){
    int days[TOTAL_ENTRIES];

     printf("Enter %d numbers of days:\n", TOTAL_ENTRIES);//User is told to eneter number of days
     for(int i = 0; i <= TOTAL_ENTRIES; i++){//The user can enter a total of 10 tries since that is the value of TOTAL_ENTRIES
        printf("Days %d: ", i + 1);//So that the days start from 1 and not 0
        scanf("%d", &days[i]);
     }

     printf("\nConversion of days into 'weeks & days':\n");

    // Loop to display the converted weeks and days
    for (int i = 0; i < TOTAL_ENTRIES; i++) {
        converter(days[i]);//The converter function will be used to convert them 
    }

    return 0;
}

// Function to convert days into weeks and days
void converter(int days) {
    int weeks = days / WEEK_DAYS;//You can simply switch WEEK_DAYS to 7 since there are seven days in a week
    int remainingDays = days % WEEK_DAYS;
    printf("%d days = %d week(s) and %d day(s)\n", days, weeks, remainingDays);
}
