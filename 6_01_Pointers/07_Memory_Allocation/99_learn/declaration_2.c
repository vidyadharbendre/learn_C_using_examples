#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptrtovoid;

    ptrtovoid = malloc(sizeof(int)); // Allocate memory for an integer

    if (ptrtovoid == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    printf("Pointer address is: %p\n", ptrtovoid);
    printf("Pointer address is: %p\n", (void *)ptrtovoid);
    // Don't forget to free the allocated memory when done using it
    free(ptrtovoid);

    return 0;
}


// The output of the above program is shown as below
/*
Pointer address is: 0x14c605e10
Pointer address is: 0x14c605e10
*/