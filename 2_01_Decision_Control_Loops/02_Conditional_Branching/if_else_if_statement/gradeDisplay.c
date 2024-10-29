/*
    Name of the Program: Grade Determination
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program determines a student's grade based on their marks 
    using if-else if statements. It categorizes grades as follows:
        - A: 90 and above
        - B: 80 to 89
        - C: 70 to 79
        - D: 60 to 69
        - F: below 60

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

    // Determine grade based on marks input using if-else if statements
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

// Compilation command: gcc gradeDetermination.c -o gradeDetermination
// Execution command: ./gradeDetermination

/* Example Outputs:

Case 1:
Enter your marks: 95
Grade: A

Case 2:
Enter your marks: 84
Grade: B

Case 3:
Enter your marks: 72
Grade: C

Case 4:
Enter your marks: 61
Grade: D

Case 5:
Enter your marks: 50
Grade: F

Case 6:
Enter your marks: 45
Grade: F
*/
