# Sorting Algorithms

## Introduction

Sorting is a fundamental operation in computer science where the goal is to arrange a collection of elements in a specific order. Various sorting algorithms are designed to achieve this task efficiently.

This README provides an overview of three commonly used sorting algorithms: Selection Sort, Insertion Sort, and Bubble Sort.

## Selection Sort

### Overview

Selection Sort is a simple sorting algorithm that repeatedly selects the smallest (or largest) element from the unsorted part of the array and places it at the beginning (or end). The process is repeated until the entire array is sorted.

### Characteristics

- **Time Complexity:** O(n^2) for the worst and average cases.
- **Space Complexity:** O(1) - in-place sorting algorithm.
- **Stability:** Not stable - the relative order of equal elements may change.

### How it Works

1. Find the minimum element in the unsorted part.
2. Swap it with the first element.
3. Move the boundary between the sorted and unsorted parts.

## Insertion Sort

### Overview

Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

### Characteristics

- **Time Complexity:** O(n^2) for the worst and average cases, O(n) for the best case (sorted array).
- **Space Complexity:** O(1) - in-place sorting algorithm.
- **Stability:** Stable - the relative order of equal elements is preserved.

### How it Works

1. Start with the second element and compare it with the elements before it.
2. Insert the element into its correct position in the sorted part.
3. Repeat the process for the remaining unsorted elements.

## Bubble Sort

### Overview

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Characteristics

- **Time Complexity:** O(n^2) for the worst and average cases, O(n) for the best case (sorted array).
- **Space Complexity:** O(1) - in-place sorting algorithm.
- **Stability:** Stable - the relative order of equal elements is preserved.

### How it Works

1. Compare adjacent elements and swap them if they are in the wrong order.
2. Repeat the process for each pair of adjacent elements.
3. Continue the passes until no swaps are needed, indicating the array is sorted.

## Conclusion

Each sorting algorithm has its strengths and weaknesses, and the choice of algorithm depends on the specific requirements of the task at hand. Understanding these differences is crucial for selecting the most appropriate algorithm for a given scenario.
