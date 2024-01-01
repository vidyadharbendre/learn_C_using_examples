#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getchar();

    printf("Character entered: ");
    putchar(ch); // Print the character using putchar
    printf("\n");

    return 0;
}

// The output of the above program is shown below:
/*  
Enter a character: V
Character entered: V
*/
