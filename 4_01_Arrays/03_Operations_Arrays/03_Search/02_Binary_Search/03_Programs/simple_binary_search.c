/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
version 1 - 16 December 2023
version 2 - 15 December 2024

Purpose:
This program demonstrates a binary search to find an element in a sorted array.

Description:
The program uses binary search to check whether a target element is present in a given sorted array. 
If found, the program prints the index of the element. Otherwise, 
it prints that the element is not present.

Explanation:
1. A sorted array of integers is defined.
2. The target element to search for is provided.
3. The size of the array is computed using `sizeof()`.
4. Binary search is performed using the `binarySearch()` function.
5. The result is printed, showing either the index of the element or a message indicating that the element is not present.

Output:
The program outputs the result of the binary search, 
either displaying the index where the element is found or a message indicating that the element is not in the array.

Note: 
To visualize the program execution step by step, you can use the PythonTutor website (https://pythontutor.com/).
Although it's primarily designed for Python, it also supports visualization of C/C++ code. Paste your code there 
and step through the program to see how variables change and functions are called.
*/

#include <stdio.h>

// Function prototype
int binarySearch(int f_arr[], int f_left_start, int f_right_end, int f_target_search);

int main() {
    int arr[] = {2, 3, 5, 8, 10, 15, 18}; // Initialize the sorted array
    int target = 15; // The target element to search for
    int arrSize = 0; // Variable to store array size
    int result = -1; // Variable to store the result

    // Calculate the size of the array
    arrSize = sizeof(arr) / sizeof(arr[0]);

    // Display the element to search for
    printf("Searching for element: %d\n", target);

    // Perform binary search
    result = binarySearch(arr, 0, arrSize - 1, target);
    if (result == -1) {
        printf("Element is not present in the array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }
    return 0;
}

// Function to perform binary search
int binarySearch(int f_arr[], int f_left_start, int f_right_end, int f_target_search) {
    int f_mid_center;

    // Binary search loop
    while (f_left_start <= f_right_end) {
        // Calculate the middle index
        f_mid_center = f_left_start + (f_right_end - f_left_start) / 2;

        // Check if the target is at the middle
        if (f_arr[f_mid_center] == f_target_search)
            return f_mid_center; // Element found at index f_mid_center

        // If the target is greater, ignore the left half
        if (f_arr[f_mid_center] < f_target_search)
            f_left_start = f_mid_center + 1;
        // If the target is smaller, ignore the right half
        else
            f_right_end = f_mid_center - 1;
    }

    // Element not found
    return -1;
}

// Time Complexity Explanation:

/*
1. Binary search works by repeatedly dividing the search space in half.
2. The time complexity of binary search is O(log n), where `n` is the number of elements in the array.
3. In each iteration, the algorithm eliminates half of the search space, reducing the number of comparisons required.

Number of Iterations for Binary Search:
- In each iteration of the loop, the search space is halved.
- Therefore, the number of iterations required to find an element or determine it's not present is proportional to the logarithm (base 2) of the array size `n`, i.e., O(log n).
- For example, if the array has 128 elements, binary search will take at most 7 iterations (log2(128) = 7).
  
For Example:
- In the current program with an array `{2, 3, 5, 8, 10, 15, 18}` and the target `15`, the loop will run as follows:
    - First, it checks the middle element (index 3, value 8).
    - Since 15 is greater, the left half is discarded, and the search continues in the right half.
    - Next, it checks the middle element of the right half (index 5, value 15).
    - The target element is found at index 5 in 2 iterations.

Time Complexity of the Binary Search Algorithm:
- Best Case: O(1) if the target is found in the first comparison.
- Worst Case: O(log n) where `n` is the number of elements in the array.

In general, binary search is much faster than linear search for large arrays because it reduces the problem size by half at each step, compared to linear search, which checks every element one by one.
*/
