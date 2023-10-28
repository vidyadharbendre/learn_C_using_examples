/* 
    Author          : Vidyadhar Bendre
    
    Email           : vidyadhar.bendre@gmail.com
    
    
    Purpose         : Demonstrating the use of 'long long' data type with and without the 'LL' suffix.
    
    Description     : This program showcases the usage of 'long long' data type in C and emphasizes the significance of the 'LL' suffix for large integer values.

    In this program:
    1. We declare a 'long long' variable 'worldPopulationWithoutLL' to represent the estimated world population without using the 'LL' suffix.
    2. Another 'long long' variable 'nationalStudentLoanDebt' is declared to represent the national student loan debt in dollars, using the 'LL' suffix for clarity.
    3. We declare 'worldPopulationWithLL' as a 'long long' variable to represent the estimated world population with the 'LL' suffix.
    
    The purpose of this program is to illustrate the difference between 'long long' integers with and without the 'LL' suffix. It also highlights the importance of using 'LL' when dealing with large integer values, as it ensures that the compiler interprets the data correctly.

    The program prints the values of these variables with appropriate descriptions, emphasizing the role of the 'LL' suffix in defining 'long long' integers.

    The output demonstrates the correct interpretation of large numbers with and without the 'LL' suffix.

*/
#include <stdio.h>

int main() {
    // Declare a `long long` variable to represent the estimated world population without using `LL` suffix.
    long long worldPopulationWithoutLL = 7873648700; 

    // Declare a `long long` variable to represent the national student loan debt in dollars using `LL` suffix.
    long long nationalStudentLoanDebt = 15000000000LL; 

    // Declare another `long long` variable to represent the estimated world population with the `LL` suffix.
    long long worldPopulationWithLL = 7873648700LL; 

    // Print the values of the variables with appropriate descriptions.
    printf("Estimated world population without using LL...:%lld\n", worldPopulationWithoutLL);
    printf("The national student loan debt is ............:$%lld.\n", nationalStudentLoanDebt);
    printf("Estimated world population with using LL......:%lld\n", worldPopulationWithLL);

    // Return 0 to indicate successful program execution.
    return 0;
}

// The output of the above program is 

/* .  

Estimated world population without using LL...:7873648700
The national student loan debt is ............:$15000000000.
Estimated world population with using LL......:7873648700

*/
