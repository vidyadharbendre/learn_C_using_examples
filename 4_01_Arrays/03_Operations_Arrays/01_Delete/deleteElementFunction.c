/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
version 1 - 16 December 2023
version 2 - 15 December 2023

Purpose:
The program serves as an interactive tool to perform various operations on an array, including displaying the array elements with their indices, obtaining the total length of the array, fetching an element at a specific index, deleting an element at a chosen index, and displaying the modified array after deletion.

Description:
This program enables users to input the total length of an array and populate it with corresponding elements. It then offers functionalities to obtain the total length of the array, retrieve an element at a given index, delete an element at a specified index, and display the resulting array after deletion.

Explanation:
Array Population: Users enter the total length of the array and subsequently input the elements.

Total Length: The program displays the total length of the array based on the provided input.

Retrieve Element: Users specify an index to fetch a particular element from the array, and the program displays the element at that index.

Delete Element: Users choose an index for deletion. The program deletes the element at the given index and displays the modified array without the deleted element.

Output: The program outputs each step's result for better understanding and verification.

Note: 
To visualize the program execution step by step, you can use the PythonTutor website (https://pythontutor.com/). Although it's primarily designed for Python, it also supports visualization of C/C++ code. Paste your code there and step through the program to see how variables change and functions are called.
*/

#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void displayArray(int arr[], int size);
void getTotalLength(int size);
void getElementAtIndex(int arr[], int size);
int getIndexToDelete();
int deleteElement(int arr[], int size, int indexToDelete);

int main() {
    int arr[MAX_SIZE];
    int size = 0; // Current size of the array

    printf("Enter the total length of the Array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display total length
    getTotalLength(size);

    // Display elements before deletion
    displayArray(arr, size);

    // Get element at a specific index
    getElementAtIndex(arr, size);

    // Get the index to delete
    int indexToDelete = getIndexToDelete();

    // Delete the element and get the updated size
    size = deleteElement(arr, size, indexToDelete);

    // Display elements after deletion
    displayArray(arr, size);

    return 0;
}

// Function to display the array elements with their indices
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("Index %d: %d\n", i, arr[i]);
    }
}

// Function to display total length of the array
void getTotalLength(int size) {
    printf("Total Length of the Array: %d\n", size);
}

// Function to get an element at a specific index in the array
void getElementAtIndex(int arr[], int size) {
    int index;
    printf("Enter the index to get the element: ");
    scanf("%d", &index);
    if (index >= 0 && index < size) {
        printf("Element at index %d: %d\n", index, arr[index]);
    } else {
        printf("Invalid index.\n");
    }
}

// Function to get the index to delete from the user
int getIndexToDelete() {
    int index;
    printf("Enter the index to delete: ");
    scanf("%d", &index);
    return index;
}

// Function to delete an element and shift the rest of the array
// Returns the updated size after deletion
int deleteElement(int arr[], int size, int indexToDelete) {
    if (indexToDelete >= 0 && indexToDelete < size) {
        for (int i = indexToDelete; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        printf("Element at index %d deleted successfully.\n", indexToDelete);
        return size - 1;  // Decrease the size and return the updated size
    } else {
        printf("Invalid index for deletion.\n");
        return size;  // If deletion fails, return the original size
    }
}

// The output of the above program is shown as below:

/*
Enter the total length of the Array: 4
Enter the array elements:
Enter element 1: 4
Enter element 2: 6
Enter element 3: 2
Enter element 4: 1
Total Length of the Array: 4
Index 0: 4
Index 1: 6
Index 2: 2
Index 3: 1
Enter the index to get the element: 0
Element at index 0: 4
Enter the index to delete: 0
Element at index 0 deleted successfully.
Index 0: 6
Index 1: 2
Index 2: 1
*/

