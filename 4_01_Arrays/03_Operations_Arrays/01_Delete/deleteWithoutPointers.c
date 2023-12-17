#include <stdio.h>
#define MAX_SIZE 100

int deleteElementAtIndex(int arr[], int size, int indexToDelete);

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
    int size = 5; // Current size of the array

    int indexToDelete = 2; // Index to delete

    printf("Original Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    size = deleteElementAtIndex(arr, size, indexToDelete);

    printf("Array after deletion at index %d: ", indexToDelete);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to delete an element at a specific index in the array
int deleteElementAtIndex(int arr[], int size, int indexToDelete) {
    if (indexToDelete < 0 || indexToDelete >= size) {
        printf("Invalid index. Deletion failed.\n");
        return size; // Return the original size as deletion failed
    }

    // Shift elements by overwriting the deleted element with the next element
    for (int i = indexToDelete; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    return size - 1; // Return the new size after deletion
}

// The output of the above program is shown below:

/* . 
Original Array: 10 20 30 40 50 
Array after deletion at index 2: 10 20 40 50 
*/