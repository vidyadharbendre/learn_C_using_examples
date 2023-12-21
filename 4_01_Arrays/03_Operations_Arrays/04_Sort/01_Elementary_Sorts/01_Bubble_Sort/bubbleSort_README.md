# Bubble Sort Algorithm

## What is Bubble Sort?
Bubble sort, also known as sinking sort, is a simple sorting algorithm that repeatedly steps through the list or array of elements, compares adjacent elements, and swaps them if they are in the wrong order. It continues this process until the entire list is sorted.

## Why use Bubble Sort?
Bubble sort, despite its simplicity, can be useful for educational purposes or sorting small datasets due to its straightforward implementation. However, it is less efficient than more advanced sorting algorithms for large datasets.

## When to use Bubble Sort?
Bubble sort is suitable for scenarios where simplicity and ease of understanding take precedence over efficiency. It's helpful for educational purposes or sorting small datasets with minimal computational resources.

## Where is Bubble Sort used?
Bubble sort, due to its inefficiency on large datasets, is not commonly used in production systems. However, it serves as a fundamental example of a sorting algorithm and can be used in educational settings to introduce sorting concepts.

## How does Bubble Sort work?
1. **Comparison Mechanism:** It compares adjacent elements and swaps them if they are in the wrong order.
2. **Iterative Passes:** It makes multiple passes through the array, moving the largest (or smallest) element to its correct position in each pass.
3. **Optimization:** It can stop early if no swaps are made in a pass, indicating that the array is already sorted.
4. **Time Complexity:** O(n^2) in the worst-case scenario.

## Different Names for Bubble Sort:
- Sinking Sort
- Exchange Sort
- Ripple Sort

## Core Logic and Loop Structure:
The core logic of Bubble Sort involves nested loops:
- **Outer Loop (i):** Iterates from 0 to N-1, representing the number of passes.
- **Inner Loop (j):** Iterates from 1 to N-i-1, representing comparisons within the unsorted portion of the array.
- **Comparison Condition:** Compares arr[j] with arr[j-1] and swaps if arr[j] is smaller (for ascending order sorting).

### Example Loop Structure (C-like Pseudocode):
```c
for (i = 0; i < N-1; i++) {
    for (j = 1; j < N-i-1; j++) {
        if (arr[j] < arr[j-1]) {
            // Swap arr[j] and arr[j-1]
            swap(arr[j], arr[j-1]);
        }
    }
}
```
