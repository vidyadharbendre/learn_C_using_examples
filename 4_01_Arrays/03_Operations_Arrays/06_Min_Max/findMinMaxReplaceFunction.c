/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
16 December 2023

Purpose:
The program is designed to find the smallest and largest elements in an array and then replace their positions in the array. 
It enables users to input an array of integers, identifies the smallest and largest elements, and swaps their positions within the array. 
The ultimate goal is to demonstrate how to manipulate arrays by replacing specific elements based on their values.

Description:
Reading Array:

The program first prompts the user to input the total number of elements for the array.
It then reads the specified number of elements entered by the user into the array.
Finding Smallest and Largest Elements:

Two functions (findSmallest and findLargest) are used to determine the indices of the smallest and largest elements in the array, respectively.
Replacement of Values:

Once the smallest and largest indices are found, the program swaps their positions in the array. The smallest element is replaced by the largest, and vice versa.
Displaying Results:

After the replacements, the program displays the original array and its modified version, showcasing the elements before and after the swapping process.
Explanation:
The program begins by prompting the user to input the total number of elements for the array. It ensures that the entered size is within acceptable bounds (not less than or exceeding the predefined maximum size).
After inputting the array elements, the program identifies the smallest and largest elements through dedicated functions (findSmallest and findLargest).
The indices of the smallest and largest elements are used to swap their positions within the array without altering their values.
Finally, the program displays the original array and its modified version, demonstrating the replacement of the smallest and largest elements.
The program exemplifies how arrays can be manipulated in C to efficiently find, replace, and rearrange specific elements based on their values.
*/

#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void readArray(int arr[], int size);
int findSmallest(int arr[], int size);
int findLargest(int arr[], int size);
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

    int smallestIndex = findSmallest(arr, size);
    int largestIndex = findLargest(arr, size);

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

// Function to find the index of the smallest element
int findSmallest(int arr[], int size) {
    int smallestIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
    }
    return smallestIndex;
}

// Function to find the index of the largest element
int findLargest(int arr[], int size) {
    int largestIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }
    return largestIndex;
}

// Function to replace smallest and largest elements
void replaceValues(int arr[], int size) {
    int smallestIndex = findSmallest(arr, size);
    int largestIndex = findLargest(arr, size);

    // Generating values to replace the smallest and largest elements
    int replacementSmallest = arr[largestIndex];
    int replacementLargest = arr[smallestIndex];

    arr[smallestIndex] = replacementSmallest;
    arr[largestIndex] = replacementLargest;
}

// The outout of the above program is shown as below:
/* 
Enter the total number of elements in the array: 5
Enter 5 elements:
1
66
-9
22
56
Smallest element: -9
Largest element: 66
Array after replacement: 1 -9 66 22 56 
*/