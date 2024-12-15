/* 
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
version 1 - 16 December 2023
version 2 - 15 December 2024

Purpose:
Generate and display a sequence of random numbers within a specified limit. The program prompts the user for the number of elements and the maximum limit for the generated random numbers.

Description:
- This program utilizes the standard C library to generate and print a sequence of random numbers.
- It prompts the user for:
  1. The number of elements to generate.
  2. The upper limit for the random numbers.
- The generated random numbers are displayed alongside their respective indices.

Explanation:
1. **User Input**:
   - Prompts the user for the number of elements and the maximum random number limit.

2. **Seeding the Random Number Generator**:
   - `srand((unsigned int)time(NULL));` initializes the random number generator.
   - `time(NULL)` returns the current time as an integer (number of seconds since the epoch), ensuring randomness across program runs.

3. **Generating Random Numbers**:
   - `rand() % maxLimit` generates random numbers within the specified range using the modulo operator.

4. **Displaying Random Numbers**:
   - Prints the generated random numbers with their respective indices in the format:  
     `Index [i]: [randomNumber]`.

Note:
You can visualize and step through this program using tools like **https://pythontutor.com/c.html#mode=edit** (C Visualization).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, maxLimit;

    // User input for the number of elements and maximum random limit
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the maximum limit for random numbers: ");
    scanf("%d", &maxLimit);

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Generate and display random numbers with indices
    printf("The random numbers with indices are:\n");
    for (int i = 0; i < n; ++i) {
        int randomNumber = rand() % maxLimit; // Generate a random number within the range
        printf("Index %d: %d\n", i, randomNumber);
    }

    return 0;
}

// The output of the above program is:
/*
Enter the number of elements: 3
Enter the maximum limit for random numbers: 10
The random numbers with indices are:
Index 0: 8
Index 1: 0
Index 2: 5
*/

/*
Note:
- Using `srand((unsigned int)time(NULL));` seeds the random number generator with the current time.
- If `srand()` is not used, the random numbers will remain the same across program runs.
- Including `#include <time.h>` allows the use of the `time()` function for randomness.
*/
