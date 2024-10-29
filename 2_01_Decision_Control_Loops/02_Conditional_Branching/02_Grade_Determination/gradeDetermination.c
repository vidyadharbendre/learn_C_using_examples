/*
    Name of the Program: Grade Determination
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program determines a student's grade based on their marks 
    using if-else if statements. It categorizes grades as follows:
        - A: 90 and above
        - B: 80 to 89
        - C: 70 to 79
        - D: below 70

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Determine grade based on marks input using if-else if statements
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}

// Compilation command: gcc gradeDetermination.c -o gradeDetermination
// Execution command: ./gradeDetermination

/* Example Outputs:

Case 1:
Enter the marks: 92
Grade: A

Case 2:
Enter the marks: 85
Grade: B

Case 3:
Enter the marks: 73
Grade: C

Case 4:
Enter the marks: 59
Grade: D
*/
