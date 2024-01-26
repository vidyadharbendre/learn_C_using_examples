#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptrtointA;

    ptrtointA = (int *)malloc(3 * sizeof(int)); // Allocate memory for three integers

    if (ptrtointA == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    printf("Pointer address is: %p\n", (void *)ptrtointA);

    ptrtointA[0] = 30;
    *(ptrtointA+1) = 60;
    ptrtointA[2] = 90;

    // Printing the values
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptrtointA[i]);
    }

    // Don't forget to free the allocated memory when done using it
    free(ptrtointA);

    return 0;
}

// The output of the above program is shown as below
/*
Pointer address is: 0x149e06060
30 60 90 
*/