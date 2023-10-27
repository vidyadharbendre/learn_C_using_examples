/*
    Program Name: longIntIndiaPopulation.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    In this example:

    - `indiaGDPWithoutLL` represents the Gross Domestic Product (GDP) of India without using the `LL` suffix.
    - `totalRainfall` represents the total annual rainfall in India in millimeters using the `LL` suffix.
    - `indiaGDPWithLL` represents the GDP of India with the `LL` suffix.

    This program demonstrates the importance of using `LL` with `long long` when working with values that exceed the range of a regular `int` and provides an Indian context that people can relate to.
*/

#include <stdio.h>

int main() {
    // Declare a `long long` variable to represent the Gross Domestic Product (GDP) of India without using `LL` suffix.
    long long indiaGDPWithoutLL = 3016765; 

    // Declare a `long long` variable to represent the total annual rainfall in India in millimeters using `LL` suffix.
    long long totalRainfall = 117200LL;

    // Declare another `long long` variable to represent the GDP of India with the `LL` suffix.
    long long indiaGDPWithLL = 3016765LL;

    // Print the values of the variables with appropriate descriptions.
    printf("Gross Domestic Product (GDP) of India without using LL: %lld in INR\n", indiaGDPWithoutLL);
    printf("Total annual rainfall in India: %lld mm\n", totalRainfall);
    printf("GDP of India with using LL: %lld in INR\n", indiaGDPWithLL);

    // Return 0 to indicate successful program execution.
    return 0;
}