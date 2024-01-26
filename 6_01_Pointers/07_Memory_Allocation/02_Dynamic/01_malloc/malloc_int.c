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

    // Freeing the allocated memory
    free(arr);

    return 0;
}

// The output of the above code is shown as below
/*
1 2 3 4 5 
*/