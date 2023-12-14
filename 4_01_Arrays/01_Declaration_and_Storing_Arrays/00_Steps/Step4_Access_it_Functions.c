#include <stdio.h>

void printArray(int arr[], int size);

// Usage of the function
int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    printArray(numbers, 5); // Passing the array and its size to the function
    // Output: 10 20 30 40 50

    return 0;
}

// Function to print elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Printing all elements of the array
    }
}