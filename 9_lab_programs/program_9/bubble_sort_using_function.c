/*
 * Program: Bubble Sort Implementation in C (User Input Version with Function)
 * Description: This program sorts an array of integers in ascending order
 *              using the Bubble Sort algorithm. The array elements are
 *              inputted by the user from the keyboard.
 * Author: Vidyadhar Bendre
 * Date: 4-01-2025
 */

#include <stdio.h>

// Function prototypes
void printArray(int fArray[], int fsize);        // Prints the array
void swap(int *A, int *B);                       // Swaps two integers
void bubbleSort(int fArray[], int fsize);        // Bubble Sort function

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

    // Sort the array using Bubble Sort
    bubbleSort(inputArray, n);

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(inputArray, n);

    return 0;
}

/*
 * Function: bubbleSort
 * ----------------------------
 * Sorts an integer array in ascending order using the Bubble Sort algorithm.
 *
 * Parameters:
 *   fArray: The array to sort
 *   fsize: The size of the array
 */
void bubbleSort(int fArray[], int fsize) {
    int i, j, flag;

    for (i = 0; i < fsize - 1; i++) {
        flag = 0; // Reset flag for each pass
        for (j = 0; j < fsize - 1 - i; j++) {
            if (fArray[j] > fArray[j + 1]) {
                swap(&fArray[j], &fArray[j + 1]);
                flag = 1; // Set flag if a swap occurs
            }
        }
        // Break if no swaps were made (array is already sorted)
        if (flag == 0) {
            break;
        }
    }
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
Enter the number of elements in the array: 6
Enter 6 elements:
6 5 4 1 3 2
Original array:
6 5 4 1 3 2 
Sorted array:
1 2 3 4 5 6 
*/