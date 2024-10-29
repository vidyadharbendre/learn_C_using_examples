/*
    Name of the Program: Temperature Classification
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program classifies temperature into four categories based on the 
    input temperature using if-else if statements:
        - "Freezing" for temperatures below 0
        - "Cold" for temperatures between 0 and 19
        - "Moderate" for temperatures between 20 and 29
        - "Hot" for temperatures 30 and above

    Version History:
        Version 1.0 - [Date: 2024-10-29] - Initial version using if-else if statements.

    Note1:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

    Note2:
    Unfortunately, we can’t use a switch statement effectively for this 
    problem because switch in C only works with integer or char expressions 
    and doesn’t support ranges (like temperature < 0 or temperature >= 20 && 
    temperature < 30). 
    
    A switch statement requires discrete values rather than conditional ranges,
    so it isn't suitable for continuous conditions like temperature classification.

    The if-else if structure is ideal here, as it can evaluate ranges and 
    complex conditions, allowing for more flexible checks, which is necessary
    for this type of problem.

*/

#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    // Determine temperature classification based on value input
    if (temperature < 0) {
        printf("Freezing\n");
    } else if (temperature >= 0 && temperature < 20) {
        printf("Cold\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("Moderate\n");
    } else {
        printf("Hot\n");
    }

    return 0;
}

// Compilation command: gcc temperatureClassification.c -o temperatureClassification
// Execution command: ./temperatureClassification

/* Example Outputs:

Case 1:
Enter the temperature: -5
Freezing

Case 2:
Enter the temperature: 15
Cold

Case 3:
Enter the temperature: 25
Moderate

Case 4:
Enter the temperature: 32
Hot
*/
