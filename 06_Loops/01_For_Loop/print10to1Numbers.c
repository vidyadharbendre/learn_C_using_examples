/*

Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Data    : 9 November, 2023

Purpose: To print numbers from 10 to 0 in reverse order using a for loop.

Description:
- The program uses a for loop to iterate over the values from 10 to 0 in descending order.
- Within the loop, it prints the current value of 'i'.
- After the loop, a newline is printed for better formatting.
- The output of the program is a sequence of numbers from 10 to 0 in reverse order.

*/

#include <stdio.h>

int main() {

    int i;

    for (i=10; i>=0; i--){
        printf("%d ", i);

    }
    printf("\n");

    return 0;
}


// The output of the above program is as shown below

/*

1 2 3 4 5 6 7 8 9 10

*/