#include <stdio.h>

int main() {
    int i, j;

    L5:
    for (i = 1; i <= 3; i++) {
        L6:
        for (j = 1; j <= 3; j++) {
            printf("%d%d ", i, j);
            if (i == 2 && j == 2) {
                printf("\nGoto L7 at i=%d, j=%d\n", i, j);
                goto L7; // Jumps to L7 label when i and j both equal 2
            }
        }
    }

    printf("Exited the loop.\n");

    L7:
    printf("Outside the loop after Goto L7.\n");

    L8:
    printf("After Goto L8.\n");

    return 0;
}
// The output of the above program is shown below:
/* . 
11 12 13 21 22 
Goto L7 at i=2, j=2
Outside the loop after Goto L7.
After Goto L8.
*/