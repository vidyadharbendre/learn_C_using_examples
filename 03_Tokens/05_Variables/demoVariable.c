/*
Author   : Vidyadhar
Email    : vidyadhar.bendre@gmail.com
Date     : 12 November, 2023

Purpose  : Demonstrate the usage of variables in C programming.

Description:
1. Declare an integer variable 'age' and assign it the value 40.
2. Declare a floating-point variable 'pi' and assign it the value 3.14.
3. Declare a character variable 'myGrade' and assign it the grade 'A'.
4. Print the values of these variables using the printf function.

Note: This program showcases the declaration and usage of variables with specific data types in C.
*/

#include <stdio.h>

int main() {
    // Variable Declaration and Initialization
    int age = 40;
    float pi = 3.14;
    char myGrade = 'A';

    // Print the values of the variables
    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Grade: %c\n", myGrade);

    return 0;
}

// The output of the program is shown as below

/*    

Age: 40
Pi: 3.14
Grade: A

*/
