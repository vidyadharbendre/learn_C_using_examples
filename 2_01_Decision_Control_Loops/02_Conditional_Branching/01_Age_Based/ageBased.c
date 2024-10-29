/*
    Name of the Program: Age Verification
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program checks if a person is an adult based on their age input.
    If the age is 18 or above, the person is classified as an adult; otherwise, they are
    considered not an adult.

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the person is an adult
    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are not an adult.\n");
    }

    return 0;
}

// Compilation command: gcc ageBased.c -o ageBased
// Execution command: ./ageBased

/* Example Outputs:

Case 1:
Enter your age: 20
You are an adult.

Case 2:
Enter your age: 16
You are not an adult.

Case 3:
Enter your age: 18
You are an adult.

Case 4:
Enter your age: 54
You are an adult.
*/
