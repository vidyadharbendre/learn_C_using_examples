/*
    Program Name: longIntIndiaPopulation.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: In this example, we have declared a long variable named indiaPopulation, which represents the estimated population of India in the year 2023. When we use the %ld format specifier in the printf statement, it tells the program to print a long integer, matching the data type of the indiaPopulation variable. The output will display the population of India in 2023 as a long integer.
    In this example:

    indiaPopulationWithoutL and indiaPopulationWithL demonstrate the use of long for India's population, one without and one with the L suffix.
    populationOfStars demonstrates the use of long with the L suffix for the estimated number of stars in a galaxy.
    This example illustrates how to use long with and without the L suffix for different scenarios where the size of the integer literal and data type declaration matters.
*/

#include <stdio.h>

int main() {
    // Declare a long integer variable named 'indiaPopulationWithoutL' and assign India's population without using L.
    long indiaPopulationWithoutL = 1380004385; // India's population without using L

    // Declare another long integer variable named 'indiaPopulationWithL' and assign India's population using L.
    long indiaPopulationWithL = 1380004385L;   // India's population with using L

    // Declare a long integer variable named 'populationOfStars' and assign the estimated number of stars in a galaxy using L.
    long populationOfStars = 100000000000L;   // Estimated number of stars in a galaxy

    // Print the values of the variables with appropriate descriptions.
    printf("India's population without using L: %ld\n", indiaPopulationWithoutL);
    printf("India's population with using L: %ld\n", indiaPopulationWithL);
    printf("India's population with using L: %li\n", indiaPopulationWithL);
    printf("India's population without length modifier: %ld\n", indiaPopulationWithoutL);
    printf("Estimated number of stars in a galaxy: %ld\n", populationOfStars);
    printf("Estimated number of stars in a galaxy: %ld\n", populationOfStars);

    // Return 0 to indicate successful program execution.
    return 0;
}
