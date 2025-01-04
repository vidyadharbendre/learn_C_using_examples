/*
 * Program: Selection Sort Implementation in C (User Input Version)
 * Description: This program sorts an array of integers in ascending order
 *              using the Selection Sort algorithm. The array elements are
 *              inputted by the user from the keyboard.
 * Author: Vidyadhar Bendre
 * Date: 4-01-2025
 */

#include <stdio.h>

// Function prototypes
void printArray(int fArray[], int fsize); // Prints the array
void swap(int *A, int *B);                // Swaps two integers

int main() {
    int n, i, j, minIndex;

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

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the remaining unsorted array
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (inputArray[j] < inputArray[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        if (minIndex != i) {
            swap(&inputArray[i], &inputArray[minIndex]);
        }
    }

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(inputArray, n);

    return 0;
}

/*
 * Function: swap
 * ----------------------------
 * Swaps the values of two integers using their pointers.
 *
 * Parameters:
 *   *A: Pointer to the first integer
 *   *B: Pointer to the second integer
 */
void swap(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
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

// The output of the above program is shown as below
/*
Enter the number of elements in the array: 5
Enter 5 elements:
5 7 8 1 3
Original array:
5 7 8 1 3 
Sorted array:
1 3 5 7 8 
*/
