/*

Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Data    : 10 November, 2023


Purpose: To print the sum of numbers from 1 to 10 using a while loop and also display the cumulative sum at each iteration.

Description:
- The program uses a while loop to iterate over the values from 1 to 10.
- Within the loop, it adds the current value of 'i' to the cumulative sum.
- During the loop, it prints the cumulative sum at each iteration.
- After the loop, it prints the final sum of the numbers.
- The output of the program is a detailed log of each iteration and the overall sum.

*/

#include <stdio.h>

int main() {

    int i = 1;
    int sum = 0;

    while (i <= 10) {

        sum += i;
        printf("Iteration %2d: the sum is %3d\n", i, sum);
        i++;

    }

    printf("\nSum of numbers from 1 to 10: %d\n", sum);

    return 0;
}

// The output of the above program is shown as below:

/*

Iteration  1: the sum is   1
Iteration  2: the sum is   3
Iteration  3: the sum is   6
Iteration  4: the sum is  10
Iteration  5: the sum is  15
Iteration  6: the sum is  21
Iteration  7: the sum is  28
Iteration  8: the sum is  36
Iteration  9: the sum is  45
Iteration 10: the sum is  55

Sum of numbers from 1 to 10: 55

*/
