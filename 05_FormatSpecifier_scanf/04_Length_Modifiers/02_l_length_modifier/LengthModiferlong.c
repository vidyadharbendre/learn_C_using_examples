/* 
    Program Name    : LongIntPopulation.c
    Author          : Vidyadhar Bendre
    Email           : vidyadhar.bendre@gmail.com
    Purpose         : 
    Demonstrating the use of long integers with and without the 'L' suffix.
    
    Description     : 
    This program illustrates the usage of long integers in C and demonstrates the difference between long integer values with and without the 'L' suffix.

    In this program:
    1. We declare a long integer variable named 'largeNumber' and assign it the maximum value for a long integer, which is 2147483647.
    2. We declare 'indiaPopulationWithoutL' and 'indiaPopulationWithL' to represent India's population, showing the usage of 'L' for long integer and without it.
    3. Another variable, 'populationOfStars,' represents the estimated number of stars in a galaxy, using 'L' for long integer.
    4. We also declare 'populationOfStarsWOL' without 'L' for comparison.

    The purpose of this program is to showcase how long integers are used, emphasizing the importance of 'L' to indicate long integers. By comparing population values and the number of stars, we illustrate how 'L' affects the interpretation of large numbers.

    The output displays the values of these variables with appropriate descriptions, highlighting the difference between long integers with and without 'L.'
*/

#include <stdio.h>

int main() {
    long int largeNumber = 2147483647; // The maximum value for a long int
    long indiaPopulationWithoutL = 1380004385; // India's population without using L
    long indiaPopulationWithL = 1380004385L;   // India's population with using L
    long populationOfStars = 100000000000L;   // Estimated number of stars in a galaxy
    long populationOfStarsWOL = 100000000000;  // Estimated number of stars in a galaxy

    // Print the values of the variables with appropriate descriptions.
    // Using %ld with l length modifier to print a long integer
    printf("1 - A long integer with %%ld...........................:%ld\n", largeNumber);
    printf("2 - India's population without using L................:%ld\n", indiaPopulationWithoutL);
    printf("3 - India's population with using L...................:%ld\n", indiaPopulationWithL);
    printf("4 - India's population with using L...................:%li\n", indiaPopulationWithL);
    printf("5 - India's population without length modifier........:%ld\n", indiaPopulationWithoutL);
    printf("6 - Estimated number of stars in a galaxy.............:%ld\n", populationOfStarsWOL);
    printf("7 - Estimated number of stars in a galaxy without L...:%ld\n", populationOfStars);

    return 0; // Return 0 to indicate successful program execution
}

//The output of the above program as shown below
/* . 

1 - A long integer with %ld...........................:2147483647
2 - India's population without using L................:1380004385
3 - India's population with using L...................:1380004385
4 - India's population with using L...................:1380004385
5 - India's population without length modifier........:1380004385
6 - Estimated number of stars in a galaxy.............:100000000000
7 - Estimated number of stars in a galaxy without L...:100000000000

*/











