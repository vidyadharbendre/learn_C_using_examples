#include <stdio.h>

int main() {
    int i, j, rows;

    // Prompting the user to enter the number of rows for the pyramid
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop to handle the number of rows
    for (i = 1; i <= rows; ++i) {
        
        // Inner loop for printing spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Inner loop for printing asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        // Newline after each row to move to the next line
        printf("\n");
    }

    return 0;
}
