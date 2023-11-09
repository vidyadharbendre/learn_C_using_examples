/*

Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Data    : 9 November, 2023

Purpose: To print a countdown from 10 to 0 using a do-while loop.

Description:
- The program initializes the variable 'i' with the value 10.
- It then enters a do-while loop that prints the current value of 'i' and decrements 'i' by 1.
- The loop continues as long as 'i' is greater than or equal to 0.
- After the loop, a newline is printed for better formatting.
- The output of the program is a countdown from 10 to 0.

*/


#include <stdio.h>

int main() {
    int i = 10;

    do {
        printf("%d ", i);
        i--;
    } while (i >= 0);

    printf("\n");

    return 0;
}

// The output of the above program is shown below

/*

10 9 8 7 6 5 4 3 2 1 0 

*/