#include <stdio.h>
#include <stdlib.h>

int main() {
    int intA;
    int *ptrtointA;

    ptrtointA = (int *)malloc(4); // Allocate memory for an integer

    if (ptrtointA == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    printf("Pointer address is: %p\n", (void *)ptrtointA);

    // Don't forget to free the allocated memory when done using it
    free(ptrtointA);

    return 0;
}


// The output of the above program is shown as below
/*
Pointer address is: 0x127e05e10
*/