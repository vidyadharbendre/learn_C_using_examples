#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer pointing to the first element of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Accessing elements using pointer-based method
    printf("Pointer-Based Method:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr); // Accessing the current element (dereferencing ptr)
        ptr++; // Moving the pointer to the next element
    }
    printf("\n");
    
    return 0;
}
