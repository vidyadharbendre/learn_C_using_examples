/* Program Name: UnSignedIntStudentsCount.c
   Author: Vidyadhar Bendre
   Email: vidyadhar.bendre@gmail.com
   Date: October 23, 2023
   Description: We have declared an unsigned int variable named numberOfStudents, which represents the number of students in a classroom. 
   
   When we use the %u format specifier in the printf statement, it tells the program to print an unsigned integer, matching the data type of the numberOfStudents variable. 
   
   The output will display the number of students in the classroom as an unsigned integer..

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
 
*/
#include <stdio.h>

int main() {
    // Declare an unsigned integer variable named 'numberOfStudents' and assign a value of 150.
    unsigned int numberOfStudents = 150; // An example number of students

    // Print a message to the console, including the value of 'numberOfStudents'.
    printf("The number of students in the classroom is %u\n", numberOfStudents);

    // Return 0 to indicate successful program execution.
    return 0;
}

//The output of the program is shown as below

/*
The number of students in the classroom is 150
*/