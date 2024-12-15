/*
Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
version 1 - 16 December 2023
version 2 - 15 December 2024

Purpose:
Read and display a sequence of numbers entered by the user.

Description:
- The program prompts the user to input the number of elements.
- It then accepts those numbers and displays them in the same order.
- The program uses an array to store the numbers.

Explanation:
1. **Input for Array Size**:
   - The user is prompted to enter the number of elements (size of the array).

2. **Dynamic Declaration Issue**:
   - Declaring an array as `int numbersArray[n];` (where `n` is user-defined) is invalid in some compilers.
   - To fix this, declare the array **after** obtaining the value of `n` or use dynamic memory allocation.

3. **Reading and Displaying Numbers**:
   - A `for` loop is used to read and print the numbers entered.

Note:
The program behavior may vary depending on the compiler. Tools like **https://pythontutor.com/c.html#mode=edit** can help you visualize and debug C programs interactively.
*/

#include <stdio.h>

int main() {
    int n = 0, i;

    // Prompt user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbersArray[n]; // Declare array after obtaining the value of n

    // Input numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &numbersArray[i]);
    }

    // Display numbers
    printf("The numbers entered are: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", numbersArray[i]);
    }
    printf("\n");

    return 0;
}

// The output of the above program is:
/*
Enter the number of elements: 5
Enter 5 numbers:
5
2
9
2
1
The numbers entered are: 5 2 9 2 1 
*/

/*
Note:
- The line `int numbersArray[n];` is a Variable Length Array (VLA) and works with C99 or later.
- If your compiler doesn't support VLAs, consider using dynamic memory allocation (e.g., `malloc()`).
*/
