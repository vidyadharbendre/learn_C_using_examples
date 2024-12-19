/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 16 December 2023  
Version 2 - 19 December 2024  

Purpose:
Insert an element into a specific index in an array and display the updated array.

Description:
- The program demonstrates how to insert an element at a specified index in an array.
- It shifts the elements after the insertion point to create space and increments the array size.

Explanation:
1. **Array Declaration**:
   - The array `arr` is statically declared with a `MAX_SIZE` limit.
   - Initially, it contains some predefined elements.

2. **Index Validation**:
   - The index for insertion is checked to ensure it is within bounds (`0 ≤ index ≤ size`).
   - The array must have enough space to accommodate the new element.

3. **Element Insertion**:
   - A `for` loop shifts elements to the right, creating a space for the new element.
   - The new element is placed at the specified index.

4. **Output**:
   - The program displays the original array and the updated array after insertion.

Note 1:
- The array size is increased logically but remains unchanged physically.
- Array bounds must be carefully managed during insertion.

Note 2:
- The program is written in C for simplicity.
- Tools like **https://pythontutor.com/c.html#mode=edit** can help you visualize and debug C programs interactively.

*/

#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; // Initial array with predefined values
    int size = 5;  // Actual size of the array

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Element to insert and its index
    int elementToInsert = 25;
    int indexToInsert = 2;

    // Validate the index and available space
    if (indexToInsert > size || indexToInsert < 0 || size >= MAX_SIZE) {
        printf("Invalid index or insufficient space. Insertion failed.\n");
        return 1; // Exit the program with an error code
    }

    // Shift elements to the right to create space
    for (int i = size; i > indexToInsert; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified index
    arr[indexToInsert] = elementToInsert;
    size++; // Increment the logical size of the array

    // Display the updated array
    printf("Array after insertion of %d at index %d: ", elementToInsert, indexToInsert);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
Sample Output:
---------------
Original Array: 10 20 30 40 50
Array after insertion of 25 at index 2: 10 20 25 30 40 50
*/

/*
Note:
- The program assumes a fixed array size (`MAX_SIZE`) and logical size management.
- Proper index validation prevents runtime errors.
*/
