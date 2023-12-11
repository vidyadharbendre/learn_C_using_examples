/*

Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Data    : 9 November, 2023

Purpose: To print numbers from 1 to 10 using a while loop.

Description:
- The program initializes the variable 'i' with the value 1.
- It then enters a while loop that continues as long as 'i' is less than or equal to 10.
- Within the loop, it prints the current value of 'i' and increments 'i' by 1 in each iteration.
- After the loop, a newline is printed for better formatting.
- The output of the program is a sequence of numbers from 1 to 10.

*/

#include <stdio.h>

int main() {

    int i=1;
    while (i<=10){
        printf(" %d", i);
        i++;
    }
    printf("\n");

    return 0;
}


// The output of the program is shown below

/*

1 2 3 4 5 6 7 8 9 10

*/

