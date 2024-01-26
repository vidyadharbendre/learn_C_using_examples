#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptrtovoid;

    ptrtovoid = malloc(5*sizeof(int)); // Allocate memory for an integer

    if (ptrtovoid == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    printf("Pointer address is: %p\n", ptrtovoid);
    printf("Pointer address is: %p\n", (void *)ptrtovoid);
    printf("size of the pointer variable = %lu in bytes\n", sizeof(ptrtovoid));
    printf("size of the integer = %lu in bytes\n", sizeof(int));
    printf("size of the actual block in heap memory = %lu in bytes", (5*sizeof(int)));
    // Don't forget to free the allocated memory when done using it
    free(ptrtovoid);

    return 0;
}


// The output of the above program is shown as below
/*
Pointer address is: 0x132605ee0
Pointer address is: 0x132605ee0
size of the pointer variable = 8 in bytes
size of the integer = 4 in bytes
size of the actual block in heap memory = 20 in bytes
*/