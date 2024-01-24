#include <stdio.h>
#include <stdlib.h>

int *allocateMemory();
// Function to allocate memory and return a pointer

int main() {
    int *dynamicInteger;

    // Call the function to allocate memory
    dynamicInteger = allocateMemory();

    // Use the dynamically allocated memory
    *dynamicInteger = 42;
    printf("Value stored in dynamically allocated memory: %d\n", *dynamicInteger);

    // Deallocate the memory when it's no longer needed
    free(dynamicInteger);

    return 0;
}

int *allocateMemory() {
    int *ptr;

    // Allocating memory for a single integer
    ptr = (int *)malloc(sizeof(int));

    // Checking if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);  // Terminate the program with an error code
    }

    return ptr;
}

// The output of the above program is shown as below
/*
Value stored in dynamically allocated memory: 42
*/