/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
version 1 - 16 December 2023
version 2 - 15 December 2024

Purpose:
This program demonstrates a linear search to find an element in an array, 
and also shows the index and position of the element.

Description:
The program uses linear search to check whether a target element is present in a given array. 
If found, the program prints the index and the position of the element. Otherwise, 
it prints that the element is not present.

Explanation:
1. An array of integers is defined.
2. The target element to search for is provided.
3. The size of the array is computed using `sizeof()`.
4. Linear search is performed using the `linearSearch()` function.
5. The result is printed, showing either the index and position of the element 
   or a message indicating that the element is not present.

Output:
The program outputs the result of the linear search, 
either displaying the index and position where the element is found 
or a message indicating that the element is not in the array.

Note: 
To visualize the program execution step by step, you can use the PythonTutor website (https://pythontutor.com/).
Although it's primarily designed for Python, it also supports visualization of C/C++ code. Paste your code there 
and step through the program to see how variables change and functions are called.
*/

#include <stdio.h>

// Function prototype
int linearSearch(int arr[], int n, int target, int *position);

int main() {
    int arr[] = {2, 3, 5, 8, 10, 15, 18}; // Initialize the array
    int target = 15; // The target element to search for
    int arrSize = 0; // Variable to store array size
    int result, position = -1; // Initialize position to -1

    // Calculate the size of the array
    arrSize = sizeof(arr) / sizeof(arr[0]);

    // Display the element to search for
    printf("Searching for element: %d\n", target);

    // Perform linear search
    result = linearSearch(arr, arrSize, target, &position);
    if (result == -1) {
        printf("Element is not present in the array\n");
    } else {
        printf("Element is present at index %d and position %d\n", result, position);
    }
    return 0;
}

// Function to perform linear search
int linearSearch(int farr[], int fn, int ftarget, int *position) {
    int fi;
    for (fi = 0; fi < fn; fi++) {
        if (farr[fi] == ftarget) {
            *position = fi; // Update the position
            return fi; // Element found at index fi
        }
    }
    return -1; // Element not found
}

// Time Complexity Explanation:

/*
1. Best Case: If the target element is found on the first iteration, the loop breaks and the time complexity is O(1) (constant time).
2. Worst Case: If the target element is not present or is found at the last iteration, the loop will run `n` times, making the time complexity O(n).

Number of Iterations for Linear Search:

- The `for` loop runs from i = 0 to i = n-1, where `n` is the size of the array.
- If the target element is found at index `i`, the loop returns the index immediately.
- If the target element is not found, the loop runs `n` iterations and returns -1.

For Example:
- In the current program with an array `{2, 3, 5, 8, 10, 15, 18}` and the target `15`, the loop will run as follows:
    - Iteration 1: Check arr[0] = 2 (not the target)
    - Iteration 2: Check arr[1] = 3 (not the target)
    - Iteration 3: Check arr[2] = 5 (not the target)
    - Iteration 4: Check arr[3] = 8 (not the target)
    - Iteration 5: Check arr[4] = 10 (not the target)
    - Iteration 6: Check arr[5] = 15 (target found at index 5)
    
Thus, the loop runs 6 times in this case. 

Time Complexity of the Linear Search Algorithm:
- Best Case: O(1) if the target is found on the first iteration.
- Worst Case: O(n) if the target is not found or found on the last iteration.

In general, the time complexity of this `for` loop is **O(n)** because in the worst case, it checks each element once in the array.
*/
