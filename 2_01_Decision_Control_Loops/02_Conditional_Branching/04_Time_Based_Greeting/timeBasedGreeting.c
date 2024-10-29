/*
    Name of the Program: Greeting Based on Time of Day
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program takes an hour in 24-hour format as input and displays 
    a greeting based on the time of day. The greetings are categorized as follows:
        - Good morning: For hours less than 12
        - Good afternoon: For hours from 12 to less than 18
        - Good evening: For hours 18 and above

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int hour;

    printf("Enter the hour (in 24-hour format): ");
    scanf("%d", &hour);

    // Determine greeting based on the hour input using if-else if statements
    if (hour < 12) {
        printf("Good morning!\n");
    } else if (hour < 18) {
        printf("Good afternoon!\n");
    } else {
        printf("Good evening!\n");
    }

    return 0;
}

// Compilation command: gcc timeBasedGreeting.c -o timeBasedGreeting
// Execution command: ./timeBasedGreeting

/* Example Outputs:

Case 1:
Enter the hour (in 24-hour format): 9
Good morning!

Case 2:
Enter the hour (in 24-hour format): 14
Good afternoon!

Case 3:
Enter the hour (in 24-hour format): 20
Good evening!

Case 4:
Enter the hour (in 24-hour format): 22
Good evening!
*/
