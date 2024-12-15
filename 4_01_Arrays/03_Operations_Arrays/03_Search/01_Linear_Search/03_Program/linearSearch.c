/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
version 1 - 16 December 2023
version 1 - 15 December 2024

Purpose:
This program demonstrates both linear search and recursive linear search to find an element in an array.

Description:
The program asks the user to input an array of integers and then searches for a target element in the array using both iterative and recursive linear search methods. It displays whether the element is found and the index at which it is located.

Explanation:
1. The user is prompted to enter the length of the array.
2. The array elements are input by the user.
3. The target element is entered by the user.
4. Linear search (iterative) is performed to find the target element in the array.
5. Recursive linear search is also performed to find the target element.
6. Results for both search methods are printed.

Output:
The program outputs the result of both the linear search and the recursive linear search, showing the index where the target element is found or if it's not present.

Note: 
To visualize the program execution step by step, you can use the PythonTutor website (https://pythontutor.com/). Although it's primarily designed for Python, it also supports visualization of C/C++ code. Paste your code there and step through the program to see how variables change and functions are called.
*/

#include <stdio.h>

// Function prototypes
int linearSearch(int farr[], int flength, int ftarget);
int recursiveLinearSearch(int farr[], int flength, int ftarget);
void getArrayElements(int arr[], int length);
int getArrayLength();
int getTargetElement();

int main() {
    int arrLength = getArrayLength();
    int arr[arrLength]; // Array initialization based on the input length
    
    getArrayElements(arr, arrLength); // Get array elements from user

    int target = getTargetElement(); // Get target element from user

    // Perform linear search
    int result = linearSearch(arr, arrLength, target);
    if (result == -1) {
        printf("Element is not present in the array (using linear search)\n");
    } else {
        printf("Element is present at index %d (using linear search)\n", result);
    }

    // Perform recursive linear search
    int resultRecursive = recursiveLinearSearch(arr, arrLength, target);
    if (resultRecursive == -1) {
        printf("Element is not present in the array (using recursive linear search)\n");
    } else {
        printf("Element is present at index %d (using recursive linear search)\n", resultRecursive);
    }

    return 0;
}

// Function to perform linear search iteratively
int linearSearch(int farr[], int flength, int ftarget) {
    for (int i = 0; i < flength; ++i) {
        if (farr[i] == ftarget)
            return i; // Return the index if the element is found
    }
    return -1; // Element is not present in the array
}

// Function to perform linear search recursively
int recursiveLinearSearch(int farr[], int flength, int ftarget) {
    if (flength < 0)
        return -1; // Element not found

    if (farr[flength - 1] == ftarget)
        return flength - 1; // Return the index if element is found

    return recursiveLinearSearch(farr, flength - 1, ftarget); // Recursive call with reduced length
}

// Function to get the elements of the array from the user
void getArrayElements(int arr[], int length) {
    printf("Enter %d elements:\n", length);
    for (int i = 0; i < length; ++i) {
        scanf("%d", &arr[i]); // Store user input in the array
    }
}

// Function to get the length of the array
int getArrayLength() {
    int flength;
    printf("Enter the length of the array: ");
    scanf("%d", &flength); // Input array length from the user
    return flength;
}

// Function to get the target element to search for
int getTargetElement() {
    int ftarget;
    printf("Enter the target element to search: ");
    scanf("%d", &ftarget); // Input target element from the user
    return ftarget;
}

// The output of the above program is shown below:

/* 
Enter the length of the array: 4
Enter 4 elements:
89
43
23
10
Enter the target element to search: 23
Element is present at index 2 (using linear search)
Element is present at index 2 (using recursive linear search)
*/
