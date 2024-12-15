# Selection Sort vs Bubble Sort vs Insertion Sort

This repository demonstrates the comparison between three common sorting algorithms: **Selection Sort**, **Bubble Sort**, and **Insertion Sort**. These algorithms are used to sort an array of elements in ascending or descending order. Although they all perform similar tasks, they have different approaches, performance characteristics, and use cases.

## Table of Contents
- [Overview](#overview)
- [Selection Sort](#selection-sort)
- [Bubble Sort](#bubble-sort)
- [Insertion Sort](#insertion-sort)
- [Comparison](#comparison)
- [Code Implementations](#code-implementations)
- [Conclusion](#conclusion)

## Overview

Sorting algorithms are fundamental to computer science and are used in many applications. Here we compare three simple, comparison-based sorting algorithms: **Selection Sort**, **Bubble Sort**, and **Insertion Sort**.

- **Selection Sort**: This algorithm works by repeatedly finding the minimum (or maximum) element from the unsorted part of the array and swapping it with the leftmost unsorted element.
  
- **Bubble Sort**: This algorithm repeatedly compares adjacent elements in the array and swaps them if they are in the wrong order. The process is repeated until no swaps are needed.

- **Insertion Sort**: This algorithm builds the sorted array one element at a time by picking elements from the unsorted part and inserting them into their correct position within the sorted part.

## Selection Sort

Selection Sort is an in-place, comparison-based sorting algorithm. It repeatedly selects the smallest (or largest) element from the unsorted part of the array and places it in its correct position.

### Time Complexity:
- **Best Case**: O(n^2)
- **Average Case**: O(n^2)
- **Worst Case**: O(n^2)

### Space Complexity: O(1) (in-place)

### Requirements:
- Selection Sort does not require the array to be sorted or partially sorted.

## Bubble Sort

Bubble Sort works by comparing adjacent elements in the array and swapping them if they are in the wrong order. The process is repeated until no more swaps are needed, which means the array is sorted.

### Time Complexity:
- **Best Case**: O(n) (if the array is already sorted)
- **Average Case**: O(n^2)
- **Worst Case**: O(n^2)

### Space Complexity: O(1) (in-place)

### Requirements:
- Bubble Sort does not require the array to be sorted or partially sorted.

## Insertion Sort

Insertion Sort builds the final sorted array one element at a time by inserting elements from the unsorted part into their correct position in the sorted part.

### Time Complexity:
- **Best Case**: O(n) (if the array is already sorted)
- **Average Case**: O(n^2)
- **Worst Case**: O(n^2)

### Space Complexity: O(1) (in-place)

### Requirements:
- Insertion Sort works best when the array is partially sorted.

## Comparison

| **Property**              | **Selection Sort**                        | **Bubble Sort**                          | **Insertion Sort**                       |
|---------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| **Time Complexity (Best Case)** | O(n^2)                                   | O(n)                                     | O(n)                                     |
| **Time Complexity (Worst Case)** | O(n^2)                                   | O(n^2)                                   | O(n^2)                                   |
| **Time Complexity (Average Case)** | O(n^2)                                   | O(n^2)                                   | O(n^2)                                   |
| **Space Complexity**       | O(1)                                     | O(1)                                     | O(1)                                     |
| **Stability**              | Unstable                                 | Stable                                   | Stable                                   |
| **Ease of Implementation** | Simple                                   | Simple                                   | Simple                                   |
| **Best Use Case**          | When memory writes are expensive         | When the array is nearly sorted          | When the array is small or partially sorted |
| **Swaps**                  | Few swaps, many comparisons              | Many swaps, fewer comparisons            | Few swaps, many comparisons              |

## Code Implementations

### Selection Sort (C Code)

```c
#include <stdio.h>
void selectionSort(int farr[], int fsize);

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, size);
    
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void selectionSort(int farr[], int fsize) {
    for (int fi = 0; i < fsize - 1; fi++) {
        int fminIdx = fi;
        for (int fj = fi + 1; fj < fsize; fj++) {
            if (farr[fj] < arr[fminIdx]) {
                fminIdx = fj;
            }
        }
        // Swap the found minimum element with the first element
        int ftemp = arr[fminIdx];
        farr[fminIdx] = farr[fi];
        farr[fi] = ftemp;
    }
}

```
### Bubble Sort (C Code)

```c

#include <stdio.h>
void bubbleSort(int arr[], int size);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, size);
    
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

```

### Insertion Sort (C Code)

```c
#include <stdio.h>
void insertionSort(int arr[], int size);

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, size);
    
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


```