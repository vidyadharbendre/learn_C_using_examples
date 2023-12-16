/* . 
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
16 December 2023

Purpose:
Generate and display a sequence of random numbers within a specified limit. The program prompts the user for the number of elements and the maximum limit for the generated random numbers.

Description:
This program utilizes the standard C library to generate and print a sequence of random numbers. It prompts the user for the number of elements to generate and the upper limit for the random numbers. The random numbers are displayed alongside their respective indices.

Explanation:
User Input:

The program prompts the user to input the number of elements to generate and the maximum limit for the random numbers.
Seeding the Random Number Generator:

srand((unsigned int)time(NULL)); initializes the random number generator. time(NULL) returns the current time as an integer (the number of seconds since the epoch), providing a different seed for the random number generator on each program run. This step ensures that the generated sequence of random numbers varies each time the program runs.
Generating Random Numbers:

The program utilizes rand() % maxLimit to generate random numbers within the specified limit (maxLimit). The % (modulo) operator ensures that the generated random numbers do not exceed the specified maximum limit.
Displaying Random Numbers:

The program displays the generated random numbers along with their respective indices in the format Index [i]: [randomNumber].
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, maxLimit;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the maximum limit for random numbers: ");
    scanf("%d", &maxLimit);

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Generate random numbers within the specified limit
    printf("The random numbers with indices are:\n");
    for (int i = 0; i < n; ++i) {
        int randomNumber = rand() % maxLimit; // Generate a random number and take the modulus
        printf("Index %d: %d\n", i, randomNumber);
    }

    return 0;
}

// The output of the above program is shown below:
/* . 
Enter the number of elements: 5
Enter the maximum limit for random numbers: 39080
The random numbers with indices are:
Index 0: 2648
Index 1: 12074
Index 2: 7608
Index 3: 29830
Index 4: 21275
*/

/* . 
When you use srand() to seed the random number generator in C, it's good practice to use the current time as the seed value. This ensures that each time you run the program, you get a different sequence of random numbers, adding more randomness.

For example, you might use the following code to seed the random number generator using the current time:

srand((unsigned int)time(NULL));

This line uses time(NULL) to get the current time as an integer value (number of seconds since the epoch), which then becomes the seed for the random number generator.

In your specific code snippet, if you do not explicitly seed the random number generator with srand(), the sequence of generated random numbers will be the same every time you run the program. Adding #include <time.h> allows you to use the time() function for seeding the random number generator to introduce more randomness into the generated numbers.

*/
