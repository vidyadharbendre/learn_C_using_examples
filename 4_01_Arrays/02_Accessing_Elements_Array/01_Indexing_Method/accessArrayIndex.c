/* 
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
version 1 - 15 December 2024

Purpose: 
Access elements of an array using the index method.

Description:
- Arrays in C are zero-indexed, meaning the first element is accessed using index 0.
- To access an element at a specific position, use `arr[index]`.
- For example, `arr[2]` accesses the third element of the array.

Note:
You can visualize and step through this program using tools like **https://pythontutor.com/c.html#mode=edit** (C Visualization).
*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    // Accessing elements using index method
    printf("Accessing Array Through Index Method:\n");
    printf("Element at index 2: %d\n", arr[2]); // Accessing the third element (index 2) which is 30
    
    return 0;
}

// The output of the above program is:
/*
Accessing Array Through Index Method:
Element at index 2: 30
*/
