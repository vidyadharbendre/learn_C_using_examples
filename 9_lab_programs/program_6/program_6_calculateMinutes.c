/*
    Name of the Program: Life Activity Duration Calculator
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description: 
    This program calculates the number of minutes spent on sleeping and eating, 
    as well as the years spent on reading, based on the user's date of birth and today's date.

    The program performs the following:
    1. Accepts today's date and the user's date of birth.
    2. Converts the dates into total days.
    3. Computes the total minutes spent on sleeping and eating.
    4. Computes the total years spent on reading.

    Version History:
    Version 1.0 - [Date: 2024-11-29] - Initial version.

    Note:
    This program uses simplified calculations assuming 30 days per month and 365 days per year.
    It is not suitable for precise date arithmetic involving leap years or different month lengths.

    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

// Function declarations
int convertToDays(int day, int month, int year);
float calculateTotalMinutes(int totalDays);
double calculateYearsReading(int totalDays);

// Main function
int main() {
    int todayDay, todayMonth, todayYear;
    int birthDay, birthMonth, birthYear;
    int totalDays;
    float totalMinutes;
    double yearsReading;


    // Input: Read today's date and date of birth
    printf("Enter today's date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &todayDay, &todayMonth, &todayYear);

    printf("Enter your date of birth (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &birthDay, &birthMonth, &birthYear);

    // Calculate total days lived
    totalDays = convertToDays(todayDay, todayMonth, todayYear) - 
                    convertToDays(birthDay, birthMonth, birthYear);

    // Call functions to calculate results
    totalMinutes = calculateTotalMinutes(totalDays);
    yearsReading = calculateYearsReading(totalDays);

    // Output results
    printf("Total minutes spent on sleeping and eating: %.2f minutes\n", totalMinutes);
    printf("Number of years spent on reading: %.2lf years\n", yearsReading);

    return 0;
}

// Function to convert date to total days
int convertToDays(int day, int month, int year) {
    /*
        Description:
        Converts a given date into the total number of days since the start of year 1.
        Assumes 30 days per month and 365 days per year for simplicity.
    */
    return day + (month - 1) * 30 + (year - 1) * 365;
}

// Function to calculate total minutes spent on sleeping and eating
float calculateTotalMinutes(int totalDays) {
    /*
        Description:
        Calculates the total minutes spent on sleeping and eating over a given number of days.
        Assumes:
        - 8 hours per day spent sleeping.
        - 1.5 hours per day spent eating.
    */
    const int SLEEP_HOURS = 8;
    const float EAT_HOURS = 1.5;
    return totalDays * (SLEEP_HOURS + EAT_HOURS) * 60;
}

// Function to calculate years spent on reading
double calculateYearsReading(int totalDays) {
    /*
        Description:
        Calculates the total number of years spent on reading over a given number of days.
        Assumes:
        - 12 hours per day spent on reading.
    */
    const int READ_HOURS = 12;
    return totalDays * READ_HOURS / 24.0 / 365.0;
}

// The output of the above program is shown below
/*
Enter today's date (dd-mm-yyyy): 29-11-2024
Enter your date of birth (dd-mm-yyyy): 25-09-1971
Total minutes spent on sleeping and eating: 11063130.00 minutes
Number of years spent on reading: 26.59 years
*/
