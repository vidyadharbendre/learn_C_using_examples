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

    // Displaying the values
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Reallocating memory to increase the size
    int newSize = 8;
    arr = (int *)realloc(arr, newSize * sizeof(int));

    // Checking if reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Exit with an error code
    }

    // Using the reallocated memory
    for (int i = size; i < newSize; i++) {
        arr[i] = i + 1;
    }

    // Displaying the updated values
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    // Freeing the final allocated memory
    free(arr);

    return 0;
}

//The output of the above program is shown as below
/*
1 2 3 4 5 1 2 3 4 5 6 7 8 %
*/