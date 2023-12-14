#include <stdio.h>

int main() {
    int i, j;

    L3:
    for (i = 1; i <= 3; i++) {
        L4:
        for (j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) {
                printf("Continue at i=%d, j=%d\n", i, j);
                continue; // Skips to the next iteration of the inner loop when i and j both equal 2
            }
            printf("%d%d ", i, j);
        }
    }

    printf("Exited the loop.\n");

    return 0;
}

// The output of the above program is shown below:
/*  
11 12 13 21 Continue at i=2, j=2
23 31 32 33 Exited the loop.
*/