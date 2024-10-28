/*
    Name of the Program: Grade Determination
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: This program determines a student's grade based on their marks using a switch statement.
    Version History:
        Version 1.0 - [Date: 2024-28-10] - Added a note about PythonTutor.com to write and visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:  // Only if marks are exactly 100
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
    }

    return 0;
}

