/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 5, 2024

    Purpose:
    This program demonstrates the use of the ternary operator to check voting eligibility.

    Description:
    The program uses the ternary operator to evaluate if `age` meets the voting eligibility criteria.

    Explanation:
    - If `age` is 18 or more, the result is "Eligible to vote"; otherwise, it is "Not eligible to vote".

    Version History:
        Version 1.0 - [Date: 05-NOV-2024] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

int main() {
    int age = 20;

    // Using printf directly with the ternary operator
    printf("Eligibility: %s\n", (age >= 18) ? "Eligible to vote" : "Not eligible to vote");

    return 0;
}


// Output:
// Eligibility: Eligible to vote
