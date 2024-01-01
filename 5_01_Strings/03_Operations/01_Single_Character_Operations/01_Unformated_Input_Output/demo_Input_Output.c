#include <stdio.h>

int main() {
    int c;

    printf("Enter some text (Press Enter to finish):\n");

    // Read characters until a newline character is encountered
    while ((c = getchar()) != '\n') {
        // Output each character as it is read
        putchar(c);
    }

    return 0;
}

// The output of the above program is shown below:
/* . 
V I D Y A D H A R B E N D R E
V I D Y A D H A R B E N D R E%      
*/