#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
    int size = 5; // Current size of the array

    printf("Original Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int indexToDelete = 2; // Index to delete

    if (indexToDelete >= size || indexToDelete < 0) {
        printf("Invalid index. Deletion failed.\n");
        return 1;
    }

    for (int i = indexToDelete; i < size - 1; ++i) {
        arr[i] = arr[i + 1]; // Shift elements to fill the gap
    }
    size--; // Decrement the size of the array

    printf("Array after deletion at index %d: ", indexToDelete);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
