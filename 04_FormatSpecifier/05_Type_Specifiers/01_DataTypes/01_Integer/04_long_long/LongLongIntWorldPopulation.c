/*
    Program Name: LongLongIntWorldPopulation.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    In this example:

    - `worldPopulationWithoutLL` represents the estimated world population without using the `LL` suffix.
    - `nationalStudentLoanDebt` represents the national student loan debt, using the `LL` suffix.
    - `worldPopulationWithLL` represents the estimated world population with the `LL` suffix.

    This combination demonstrates the importance of using `LL` with `long long` when working with values that exceed the range of a regular `int` and also provides a financial context that college students can relate to.
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
    printf("Estimated world population without using LL: %lld\n", worldPopulationWithoutLL);
    printf("The national student loan debt is $%lld.\n", nationalStudentLoanDebt);
    printf("Estimated world population with using LL: %lld\n", worldPopulationWithLL);

    // Return 0 to indicate successful program execution.
    return 0;
}
