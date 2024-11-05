#include <stdio.h>

int main() {
    int i, j, rows;

    /* 
    Step 1: Prompt the user to enter the number of rows for the pyramid
    */
    printf("Enter number of rows: ");
    scanf("%d", &rows); // Step 2: Read the number of rows from user input

    /* 
    Step 3: Outer loop to handle the number of rows
    This loop runs from 1 to the number of rows specified by the user
    */
    for (i = 1; i <= rows; ++i) {
        
        /* 
        Step 4: Inner loop for printing 'X' instead of spaces
        This loop prints 'X' characters to align the asterisks in the pyramid shape
        */
        for (j = 1; j <= rows - i; j++) {
            printf("X"); // Step 5: Print 'X' for the required number of spaces
        }
        
        /* 
        Step 6: Inner loop for printing asterisks
        This loop prints the asterisks for the current row
        */
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*"); // Step 7: Print '*' for the current row
        }
        
        /* 
        Step 8: Newline after each row to move to the next line
        */
        printf("\n");
    }

    /* 
    Step 9: Return 0 to indicate successful execution of the program
    */
    return 0;
}
