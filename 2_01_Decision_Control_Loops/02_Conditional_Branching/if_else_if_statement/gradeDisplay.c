/*
    Name of the Program: Grade Calculator
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program calculates and displays a grade based on the 
    marks entered by the user. It categorizes grades as follows:
        - A: 90 and above
        - B: 75 to 89
        - C: 60 to 74
        - D: 45 to 59
        - F: below 45

    Version History:
        Version 1.0 - [Date: 2024-28-10] - Added a note about PythonTutor.com 
        to write and visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Determine grade based on marks input
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 75) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else if (marks >= 45) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

// Compilation command: gcc gradeDisplay.c -o gradeDisplay
// Execution command: ./gradeDisplay

/* Example Outputs:

Case 1:
Enter your marks: 92
Grade: A

Case 2:
Enter your marks: 68
Grade: C

Case 3:
Enter your marks: 43
Grade: F

Case 4:
Enter your marks: 04
Grade: F
*/
