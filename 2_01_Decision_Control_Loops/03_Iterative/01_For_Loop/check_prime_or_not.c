/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program demonstrates the use of arithmetic operators and loops in C
    to check if a given integer is a prime number.

    Description:
    A prime number is a number greater than 1 that has no divisors other than 1 and itself.
    The program checks divisibility of the given number by iterating from 2 to the square root of the number.

    Explanation:
    - If the number is less than 2, it is not prime.
    - For numbers greater than 1, the program checks divisibility up to the square root of the number.
    - If any divisor is found, the number is not prime; otherwise, it is prime.

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating prime number check with 
        arithmetic operations and control flow.

    Note:
    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>
#include <stdbool.h> // To use 'bool' for true/false values
#include <math.h>    // To use 'sqrt' function

int main() {
    int num; // Variable to store the number entered by the user
    bool is_prime = true; // Variable to store prime status, initialized to true

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    /* 
       Explanation of Prime Check Logic:

       - A prime number is greater than 1 and divisible only by 1 and itself.
       - For numbers less than 2, we immediately mark them as not prime.
       - For other numbers, we check divisibility from 2 up to sqrt(num) because:
           - If 'num' has a factor greater than its square root, there must also
             be a corresponding factor less than the square root.

       Steps:
       1. Check if num < 2. If true, it is not prime.
       2. For num >= 2, iterate from 2 up to sqrt(num):
           - If num is divisible by any of these, set is_prime to false and break the loop.
           - If no divisors are found, num is prime.

       Examples:
       - For num = 11: 11 is not divisible by 2, 3, so it is prime.
       - For num = 12: 12 is divisible by 2, so it is not prime.
    */

    if (num < 2) {
        is_prime = false; // Numbers less than 2 are not prime
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                is_prime = false; // Found a divisor, so num is not prime
                break;
            }
        }
    }

    // Output result based on the value of is_prime
    if (is_prime) {
        printf("%d is a prime number.\n", num); // Output if the number is prime
    } else {
        printf("%d is not a prime number.\n", num); // Output if the number is not prime
    }

    return 0;
}

// The output of the above program is:
/*
Enter an integer: 11
11 is a prime number.

Enter an integer: 12
12 is not a prime number.

Enter an integer: 1
1 is not a prime number.
*/
