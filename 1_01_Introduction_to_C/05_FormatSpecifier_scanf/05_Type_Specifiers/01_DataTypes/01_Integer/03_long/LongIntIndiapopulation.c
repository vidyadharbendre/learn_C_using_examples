/* 

    Program Name: IndiaPopulation.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
   
    Description: 
    This program demonstrates the use of long integer variables in C. It declares three long variables to represent population figures and uses the %ld format specifier in printf statements to display these values. The program also showcases the use of the 'L' suffix to explicitly declare long integers.
    In this program:

    - 'indiaPopulationWithoutL' and 'indiaPopulationWithL' represent India's population, one without and one with the 'L' suffix.
    - 'populationOfStars' demonstrates the use of long integers for the estimated number of stars in a galaxy.
    This example highlights how to work with long integers, including when to use the 'L' suffix in data type declarations.

*/

#include <stdio.h>

int main() {
    // Declare long integer variables for India's population and the estimated number of stars in a galaxy
    long indiaPopulationWithoutL;
    long indiaPopulationWithL;
    long populationOfStars;

    // Prompt the user to enter values for India's population and the estimated number of stars
    printf("Enter India's population without using L.......................: ");
    scanf("%ld", &indiaPopulationWithoutL);

    getchar();

    printf("Enter India's population with using L..........................: ");
    scanf("%ld", &indiaPopulationWithL);

    getchar();

    printf("Enter the estimated number of stars in a galaxy with using L...: ");
    scanf("%ld", &populationOfStars);

    // Display the entered values with appropriate messages
    printf("You entered the following information..........................:\n");
    printf("India's population without using L.............................: %ld\n", indiaPopulationWithoutL);
    printf("India's population with using L................................: %ld\n", indiaPopulationWithL);
    printf("Estimated number of stars in a galaxy with using L.............: %ld\n", populationOfStars);

    // Return 0 to indicate successful program execution
    return 0;
}

// The output of the above program shown as below
/* .  

Enter India's population without using L.......................: 1380004385
Enter India's population with using L..........................: 1380004385L
Enter the estimated number of stars in a galaxy with using L...: 100000000000L
You entered the following information..........................:
India's population without using L.............................: 1380004385
India's population with using L................................: 1380004385
Estimated number of stars in a galaxy with using L.............: 100000000000

*/



