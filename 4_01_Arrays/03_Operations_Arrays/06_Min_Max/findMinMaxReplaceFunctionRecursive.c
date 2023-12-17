#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void readArray(int arr[], int size);
int findSmallest(int arr[], int size, int index);
int findLargest(int arr[], int size, int index);
void replaceValues(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the total number of elements in the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }

    readArray(arr, size);

    int smallestIndex = findSmallest(arr, size, 0);
    int largestIndex = findLargest(arr, size, 0);

    printf("Smallest element: %d\n", arr[smallestIndex]);
    printf("Largest element: %d\n", arr[largestIndex]);

    replaceValues(arr, size);

    printf("Array after replacement: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to read array elements
void readArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
}

// Recursive function to find the index of the smallest element
int findSmallest(int arr[], int size, int index) {
    if (index == size - 1) {
        return index;
    }

    int smallestIndex = findSmallest(arr, size, index + 1);
    return arr[index] < arr[smallestIndex] ? index : smallestIndex;
}

// Recursive function to find the index of the largest element
int findLargest(int arr[], int size, int index) {
    if (index == size - 1) {
        return index;
    }

    int largestIndex = findLargest(arr, size, index + 1);
    return arr[index] > arr[largestIndex] ? index : largestIndex;
}

// Function to replace smallest and largest elements
void replaceValues(int arr[], int size) {
    int smallestIndex = findSmallest(arr, size, 0);
    int largestIndex = findLargest(arr, size, 0);

    // Generating values to replace the smallest and largest elements
    int replacementSmallest = arr[largestIndex];
    int replacementLargest = arr[smallestIndex];

    arr[smallestIndex] = replacementSmallest;
    arr[largestIndex] = replacementLargest;
}

// The output of the above program is shown as below:
/* . 
Enter the total number of elements in the array: 8
Enter 8 elements:
22
56
-05
1
90
34
256
987
Smallest element: -5
Largest element: 987
Array after replacement: 22 56 987 1 90 34 256 -5 
*/