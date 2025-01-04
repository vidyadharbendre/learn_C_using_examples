/*
 * Program: Bubble Sort Implementation in C (User Input Version)
 * Description: This program sorts an array of integers in ascending order
 *              using the Bubble Sort algorithm. The array elements are
 *              inputted by the user from the keyboard.
 * Author: Vidyadhar Bendre
 * Date: 4-01-2025
 */

#include <stdio.h>

// Function prototypes
void printArray(int fArray[], int fsize); // Prints the array
void swap(int *A, int *B);                // Swaps two integers

int main() {
    int n, i, j, flag;

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

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        flag = 0; // Reset flag for each pass
        for (j = 0; j < n - 1 - i; j++) {
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
Enter the number of elements in the array: 8
Enter 8 elements:
3 5 6 1 5 8 2 0
Original array:
3 5 6 1 5 8 2 0 
Sorted array:
0 1 2 3 5 5 6 8 
*/