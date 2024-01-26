#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocating memory for an array of integers
    arr = (int *)malloc(size * sizeof(int));

    // Checking if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Using the allocated memory
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Displaying the original memory address
    printf("Original Memory Address: %p\n", (void *)arr);

    // Displaying the values
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Reallocating memory to increase the size
    int newSize = size;
    int *newarr = (int *)realloc(arr, newSize * sizeof(int));

    // Checking if reallocation was successful
    if (newarr == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr);  // Free the original memory before exiting with an error code
        return 1;   // Exit with an error code
    }

    // Displaying the reallocated memory address
    printf("\nReallocated Memory Address: %p\n", (void *)newarr);

    // Displaying the updated values
    for (int i = size; i < newSize; i++) {
        newarr[i] = i + 1;
    }

    for (int i = 0; i < newSize; i++) {
        printf("%d ", newarr[i]);
    }

    // Freeing the final allocated memory
    free(newarr);

    return 0;
}

// The output of the above program is shown as below
/*
Original Memory Address: 0x11f605ee0
1 2 3 4 5 
Reallocated Memory Address: 0x11f605ee0
1 2 3 4 5 
*/