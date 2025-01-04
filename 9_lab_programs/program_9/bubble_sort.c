/*
 * Program: Bubble Sort Implementation in C
 * Description: This program sorts an array of integers in ascending order
 *              using the Bubble Sort algorithm. It also demonstrates the 
 *              use of a flag for optimization to terminate early if the 
 *              array becomes sorted during an iteration.
 * Author: Vidyadhar Bendre
 * Date: 4-01-2025
 */

#include <stdio.h>

// Function prototypes
void printArray(int fArray[], int fsize); // Prints the array
void swap(int *A, int *B);                // Swaps two integers

int main() {
    // Array to be sorted (unsorted input)
    int inputArray[] = {7, 3, 9, 1}; 
    int i, j, flag;                       // Variables for iteration and flag
    int length = sizeof(inputArray) / sizeof(inputArray[0]); // Array length

    // Print the original array
    printf("Original array:\n");
    printArray(inputArray, length);

    // Bubble Sort Algorithm
    for (i = 0; i < length - 1; i++) {
        flag = 0; // Reset flag for each pass
        for (j = 0; j < length - 1 - i; j++) {
            if (inputArray[j] > inputArray[j + 1]) {
                swap(&inputArray[j], &inputArray[j + 1]);
                flag = 1; // Set flag if a swap occurs
            }
        }
        // Break if no swaps were made (array is already sorted)
        if (flag == 0) {
            break;
        }
    }

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(inputArray, length);

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
Original array:
7 3 9 1 
Sorted array:
1 3 7 9 
*/