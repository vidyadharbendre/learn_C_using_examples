/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
Version 1 - 16 December 2023  
Version 2 - 15 December 2024  

Purpose:
Delete an element from a specific index in an array and display the updated array.

Description:
- The program demonstrates how to delete an element at a specified index in an array.
- It shifts the elements after the deletion point to fill the gap and decrements the array size.

Explanation:
1. **Array Declaration**:
   - The array `arr` is statically declared with a `MAX_SIZE` limit.
   - Initially, it contains some predefined elements.

2. **Index Validation**:
   - The index to delete is checked to ensure it is within bounds (`0 ≤ index < size`).

3. **Element Deletion**:
   - A `for` loop shifts elements to the left, overwriting the element at the specified index.

4. **Output**:
   - The program displays the original array and the updated array after deletion.

Note 1:
- The array size is reduced logically but remains unchanged physically.
- Array bounds must be carefully managed during deletion.

Note 2:
- The program behavior may vary depending on the compiler.
- Tools like **https://pythontutor.com/c.html#mode=edit** can help you visualize and debug C programs interactively.

*/

#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; // Initial array with predefined values
    int size = sizeof(arr) / sizeof(arr[0]);  // Dynamically calculate array size

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Index to delete
    int indexToDelete = 2;

    // Validate the index
    if (indexToDelete >= size || indexToDelete < 0) {
        printf("Invalid index. Deletion failed.\n");
        return 1; // Exit the program with an error code
    }

    // Shift elements to fill the gap
    for (int i = indexToDelete; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    size--; // Decrement the logical size of the array

    // Display the updated array
    printf("Array after deletion at index %d: ", indexToDelete);
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
Array after deletion at index 2: 10 20 40 50
*/

/*
Note:
- The program assumes a fixed array size (`MAX_SIZE`) and logical size management.
- The physical size of the array remains unchanged after deletion.
- Proper index validation prevents runtime errors.
*/
