/*
 * Program: Insertion Sort Implementation in C (Function-Based)
 * Description: This program sorts an array of integers in ascending order
 *              using the Insertion Sort algorithm. The array elements are
 *              inputted by the user from the keyboard.
 * Author: Vidyadhar Bendre
 * Date: 4-01-2025
 */

#include <stdio.h>

// Function prototypes
void printArray(int fArray[], int fsize);    // Prints the array
void insertionSort(int array[], int size);  // Implements Insertion Sort

int main() {
    int n, i;

    // Prompt user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int inputArray[n]; // Declare array of size n

    // Input array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &inputArray[i]);
    }

    // Print the original array
    printf("Original array:\n");
    printArray(inputArray, n);

    // Call the Insertion Sort function
    insertionSort(inputArray, n);

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(inputArray, n);

    return 0;
}

/*
 * Function: insertionSort
 * ----------------------------
 * Sorts an integer array in ascending order using the Insertion Sort algorithm.
 *
 * Parameters:
 *   array: The array to sort
 *   size: The size of the array
 */
void insertionSort(int array[], int size) {
    int i, j, key;

    for (i = 1; i < size; i++) {
        key = array[i]; // Current element to be inserted
        j = i - 1;

        // Move elements of the array that are greater than `key` to one position ahead
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        // Insert the key into its correct position
        array[j + 1] = key;
    }
}

/*
 * Function: printArray
 * ----------------------------
 * Prints the elements of an integer array.
 *
 * Parameters:
 *   fArray: The array to print
 *   fsize: The size of the array
 */
void printArray(int fArray[], int fsize) {
    for (int fi = 0; fi < fsize; fi++) {
        printf("%d ", fArray[fi]);
    }
    printf("\n");
}

// The Output of the above program is shown as below:
/*
Enter the number of elements in the array: 5
Enter 5 elements:
8 9 5 3 1
Original array:
8 9 5 3 1 
Sorted array:
1 3 5 8 9 
*/
