# Binary Search vs Linear Search

This repository demonstrates the comparison between **Binary Search** and **Linear Search** algorithms in C. Both algorithms are used to search for a target element in an array, but they have different approaches, performance, and use cases.

## Table of Contents
- [Overview](#overview)
- [Binary Search](#binary-search)
- [Linear Search](#linear-search)
- [Comparison](#comparison)
- [Code Implementations](#code-implementations)
- [Conclusion](#conclusion)

## Overview

**Binary Search** and **Linear Search** are two common algorithms used to search for an element in an array.

- **Linear Search**: This is a simple search algorithm that checks each element of the array in sequence until it finds the target or reaches the end of the array. It works on both sorted and unsorted arrays.
  
- **Binary Search**: This is a more efficient search algorithm but requires the array to be **sorted**. It repeatedly divides the search space in half, making it faster than linear search, especially for large datasets.

## Binary Search

Binary Search works by dividing the search interval in half. If the target value is less than the value at the middle of the interval, the algorithm narrows the search to the lower half. If the target is greater, it narrows it to the upper half. This process continues until the target is found or the interval is empty.

### Time Complexity:
- **Best Case**: O(1) (if the middle element is the target)
- **Average Case**: O(log n)
- **Worst Case**: O(log n)

### Space Complexity: O(1) (in-place)

### Requirements:
- The array must be **sorted**.

## Linear Search

Linear Search works by checking each element in the array sequentially. It compares each element with the target value until it finds the target or finishes the iteration through the array.

### Time Complexity:
- **Best Case**: O(1) (if the first element is the target)
- **Average Case**: O(n)
- **Worst Case**: O(n)

### Space Complexity: O(1) (in-place)

### Requirements:
- Works on both **sorted** and **unsorted** arrays.

## Comparison

| **Property**              | **Linear Search**                           | **Binary Search**                          |
|---------------------------|---------------------------------------------|--------------------------------------------|
| **Array Sorting**          | Not required                                | Required (the array must be sorted)        |
| **Time Complexity (Best Case)** | O(1)                                    | O(1)                                       |
| **Time Complexity (Worst Case)** | O(n)                                    | O(log n)                                   |
| **Time Complexity (Average Case)** | O(n)                                  | O(log n)                                   |
| **Space Complexity**       | O(1)                                       | O(1)                                       |
| **Use Case**               | Small or unsorted arrays                   | Large sorted arrays                        |
| **Implementation Complexity** | Simple and easy to implement             | More complex due to divide and conquer approach |

## Code Implementations

### Linear Search (C Code)

```c
#include <stdio.h>
int linearSearch(int arr[], int size, int target);

int main() {
    int arr[] = {5, 3, 8, 6, 7, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    
    int result = linearSearch(arr, size, target);
    if (result == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    
    return 0;
}
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Element found, return its index
        }
    }
    return -1;  // Element not found
}

```
### Binary Search (C Code)
```c
#include <stdio.h>
int binarySearch(int arr[], int left, int right, int target);


int main() {
    int arr[] = {1, 3, 5, 6, 7, 8};  // Must be sorted
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = binarySearch(arr, 0, size - 1, target);
    if (result == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;  // Element found, return its index
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    return -1;  // Element not found
}

```

## Conclusion
Linear Search is a simple and easy-to-implement algorithm, ideal for small or unsorted arrays. However, it can be inefficient for large datasets.

Binary Search is much more efficient for large sorted arrays, with a time complexity of O(log n). However, it requires the array to be sorted before performing the search.