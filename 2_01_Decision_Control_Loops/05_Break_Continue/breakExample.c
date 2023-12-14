#include <stdio.h>

int main() {
    int i, j;

    L1:
    for (i = 1; i <= 3; i++) {
        L2:
        for (j = 1; j <= 3; j++) {
            printf("%d%d ", i, j);
            if (i == 2 && j == 2) {
                printf("\nBreak at i=%d, j=%d\n", i, j);
                break; // Breaks out of the inner loop when i and j both equal 2
            }
        }
    }

    printf("Exited the loop.\n");

    return 0;
}

// The output of the above program is shown below:
/* . 
11 12 13 21 22 
Break at i=2, j=2
31 32 33 Exited the loop.
*/
