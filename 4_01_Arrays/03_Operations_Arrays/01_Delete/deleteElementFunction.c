/* . 
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
16 December 2023

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
*/
#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void displayArrayWithIndex(int arr[], int size);
void getTotalLength(int size);
void getArrayElements(int arr[], int size);
void getElementAtIndex(int arr[], int size);
int getIndexToDelete();
void displayAfterDeletion(int arr[], int size, int indexToDelete);

int main() {
    int arr[MAX_SIZE];
    int size = 0; // Current size of the array

    printf("Enter the total length of the Array: ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    getTotalLength(size);

    getElementAtIndex(arr, size);

    int indexToDelete = getIndexToDelete();

    displayArrayWithIndex(arr, size);

    displayAfterDeletion(arr, size, indexToDelete);

    return 0;
}

// Function to display the array elements with their indices
void displayArrayWithIndex(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("Index %d: %d\n", i, arr[i]);
    }
}

// Function to display total length of the array
void getTotalLength(int size) {
    printf("Total Length of the Array: %d\n", size);
}

// Function to get array elements
void getArrayElements(int arr[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
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

// Function to display the array elements without the deleted element
void displayAfterDeletion(int arr[], int size, int indexToDelete) {
    printf("Array after deletion at index %d: ", indexToDelete);
    for (int i = 0; i < size; ++i) {
        if (i != indexToDelete) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// The output of the above program is shown below:

/*  
Enter the total length of the Array: 5
Enter the array elements:
Enter element 1: 09
Enter element 2: 3
Enter element 3: 12
Enter element 4: 42
Enter element 5: -9
Total Length of the Array: 5
Enter the index to get the element: 1
Element at index 1: 3
Enter the index to delete: 1
Index 0: 9
Index 1: 3
Index 2: 12
Index 3: 42
Index 4: -9
Array after deletion at index 1: 9 12 42 -9 
*/
