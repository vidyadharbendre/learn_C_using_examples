/*
    Program Name: UnSignedIntStudentsCount.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Date: October 29, 2023

    Purpose: 
    This program demonstrates the use of the scanf and printf functions to handle unsigned integer data types. It prompts the user to enter the number of students in a classroom, reads the value using scanf, and displays it using printf.
    
    Description: 
    The program starts by declaring an unsigned integer variable 'numberOfStudents.' It then prompts the user to enter the number of students and reads the input into the 'numberOfStudents' variable using scanf. Finally, it displays the entered value with an appropriate message using printf. This program showcases how to work with unsigned integer data types, handle user input, and display information in a C program.

*/

#include <stdio.h>

int main() {
    // Declare an unsigned integer variable named 'numberOfStudents'.
    unsigned int numberOfStudents;

    // Prompt the user to enter the number of students and read it into 'numberOfStudents'.
    printf("Enter the number of students....................: ");
    scanf("%u", &numberOfStudents);

    // Display the entered value.
    printf("The number of students in the classroom is......: %u\n", numberOfStudents);

    // Return 0 to indicate successful program execution.
    return 0;
}

// The output of the program as shown below
/* .  

Enter the number of students....................: 150
The number of students in the classroom is......: 150

*/
