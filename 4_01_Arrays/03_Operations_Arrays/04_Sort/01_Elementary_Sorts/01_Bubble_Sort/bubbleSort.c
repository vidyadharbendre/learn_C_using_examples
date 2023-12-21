#include <stdio.h>

void bubbleSort(int arr[], int n);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using bubble sort
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Initialize as no swaps made in this pass

        for (j = 1; j < n - i - 1; j++) {
            if (arr[j] < arr[j - 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;

                swapped = 1; // Set the flag to indicate a swap was made
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (swapped == 0) {
            break; // No swaps means array is sorted, exit the loop
        }
    }
}
