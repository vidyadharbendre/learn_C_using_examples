/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
version 1 - 16 December 2023

Purpose:
This program demonstrates the functionality of deleting an element at a specific index in an array.

Description:
The program initializes an array with predefined values, displays the original array, then deletes an element at a specific index, and displays the array after deletion.

Explanation:
1. The array is initialized with some elements.
2. The original array is displayed.
3. A specific index is chosen to delete an element.
4. The remaining elements are shifted to fill the gap, and the new array is displayed.

Output:
The program outputs the array before and after the deletion, for better understanding and verification.

Note: 
To visualize the program execution step by step, you can use the PythonTutor website (https://pythontutor.com/). Although it's primarily designed for Python, it also supports visualization of C/C++ code. Paste your code there and step through the program to see how variables change and functions are called.
*/

#include <stdio.h>
#define MAX_SIZE 100

// Function prototype for deleting an element at a specific index
int deleteElementAtIndex(int arr[], int size, int indexToDelete);

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
    int size = 5; // Current size of the array

    int indexToDelete = 2; // Index to delete

    // Display original array
    printf("Original Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform deletion
    size = deleteElementAtIndex(arr, size, indexToDelete);

    // Display array after deletion
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
        return size; // Return the original size if deletion fails
    }

    // Shift elements to the left to fill the deleted element's spot
    for (int i = indexToDelete; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    return size - 1; // Return the new size after deletion
}

// The output of the above program is shown below:

/*
Original Array: 10 20 30 40 50 
Array after deletion at index 2: 10 20 40 50 
*/
