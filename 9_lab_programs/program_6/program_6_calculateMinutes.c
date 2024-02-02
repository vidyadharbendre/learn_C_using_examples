#include <stdio.h>

/*
Implement a C program to read values from the user for today’s date and your date of birth
in the format dd-mm-yyyy. 

Assume a sleeping time of 8 hours a day, reading time of 12 hours, and spending 1.5 hours
a day for eating. 

Calculate the total minutes you have spent as of this date for sleeping and eating. 

Determine the number of years you have spent reading as of this date 
(amount of time spent reading in years).
*/

// Function to convert date to days
int convertToDays(int fday, int fmonth, int fyear);

int main() {
    // Variables
    int todayDay, todayMonth, todayYear;
    int birthDay, birthMonth, birthYear;
    int sleepHours = 8;
    float eatHours = 1.5;
    int readHours = 12;
    float totalMinutes, todayDays, birthDays;
    double yearsSpentReading;

    // Read today's date
    printf("Enter today's date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &todayDay, &todayMonth, &todayYear);

    // Read date of birth
    printf("Enter your date of birth (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &birthDay, &birthMonth, &birthYear);

    // Calculate days spent
    todayDays = convertToDays(todayDay, todayMonth, todayYear);
    birthDays = convertToDays(birthDay, birthMonth, birthYear);

    // Calculate total minutes spent on sleeping and eating
    totalMinutes = (todayDays - birthDays) * (sleepHours + eatHours) * 60;

    // Calculate number of years spent on reading
    yearsSpentReading = (todayDays - birthDays) * readHours / 24.0 / 365.0;

    // Display results
    printf("Total minutes spent on sleeping and eating: %.2f minutes\n", totalMinutes);
    printf("Number of years spent on reading: %.2lf years\n", yearsSpentReading);

    return 0;
}

// Function to convert date to days
int convertToDays(int fday, int fmonth, int fyear) {
    return fday + (fmonth - 1) * 30 + (fyear - 1) * 365;
}

// The output of the above program is shown as below
/*
Enter today's date (dd-mm-yyyy): 02-02-2024
Enter your date of birth (dd-mm-yyyy): 25-09-1971
Total minutes spent on sleeping and eating: 10893840.00 minutes
Number of years spent on reading: 26.18 years
*/