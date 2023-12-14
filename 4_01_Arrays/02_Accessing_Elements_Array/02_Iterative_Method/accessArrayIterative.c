/* 
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
14 December 2023

Purpose: 
Calculate the number of elements in the array & traverse through Iterative way

Description:
- sizeof(arr) gives the total size occupied by the entire array in bytes.
- sizeof(arr[0]) gives the size of a single element (in this case, the first element of the array) in bytes.
- sizeof(arr) / sizeof(arr[0]) calculates the number of elements in the array by dividing the total size of the array by the size of a single element.

*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}, maxSizeArray, i;
    
    // Calculating the number of elements in the array
    maxSizeArray = sizeof(arr) / sizeof(arr[0]);

    // Displaying the size of the entire array in bytes
    printf("Using sizeof operator to calculate the length of the Array\n");
    // sizeof(arr) gives the total size occupied by the entire array in bytes
    printf("The size of the array is displayed in bytes: %lu\n", sizeof(arr));
    
    // Displaying the size of the first element in bytes
    // sizeof(arr[0]) gives the size of a single element (the first element) in bytes
    printf("The size of the first element in bytes: %lu\n", sizeof(arr[0]));

    // Accessing elements using iterative method (for loop)
    printf("\nIterative Method:\n");
    for (i = 0; i < maxSizeArray; i++) {
        printf("%d ", arr[i]); // Printing all elements of the array
    }
    printf("\n");
    
    return 0;
}

// The output of the above program is:
/* . 
Using sizeof operator to calculate the length of the Array
The size of the array is displayed in bytes: 20
The size of the first element in bytes: 4

Iterative Method:
10 20 30 40 50 
*/
