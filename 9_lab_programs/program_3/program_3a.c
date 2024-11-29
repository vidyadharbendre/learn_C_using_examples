#include <stdio.h>

/*
    Name of the Program: Pyramid of Stars
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program prints a pyramid of stars based on the user's input for the number of rows.
    It uses nested loops to print spaces and asterisks in a formatted manner to create a pyramid shape.

    Version History:
        Version 1.0 - [Date: 2024-11-29] - Initial version that prints the pyramid of stars.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

int main() {
    // Variable declarations
    int i, j, rows; // i, j are loop counters, rows is the number of rows for the pyramid

    // Prompting the user to enter the number of rows for the pyramid
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /*
        Outer loop:
        The outer loop controls the number of rows (i.e., height) of the pyramid.
        It iterates from 1 to the number of rows entered by the user.
    */
    for (i = 1; i <= rows; ++i) {
        /*
            Inner loop for printing spaces:
            The inner loop prints spaces to align the stars in a pyramid shape.
            It ensures that the number of spaces decreases as the number of rows increases.
        */
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        /*
            Inner loop for printing asterisks:
            The second inner loop prints the asterisks for the current row.
            The number of asterisks increases as we move down the rows.
        */
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Newline after each row to move to the next line
        printf("\n");
    }

    // Return 0 to indicate successful program execution
    return 0;
}

// The output of the above program is shown as below:

/*
Enter number of rows: 5
    *
   ***
  *****
 *******
*********
vidyadharbendre@Vidyadhars-MacBook-Pro program_3 % ./program_3a                  
Enter number of rows: 3
  *
 ***
*****
*/
