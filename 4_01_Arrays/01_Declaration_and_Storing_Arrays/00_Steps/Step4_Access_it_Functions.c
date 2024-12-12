/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 09 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and print elements of an integer array using a function

    Description:
    This program demonstrates the creation, initialization, and printing of elements in an integer array using a separate function. 
    An array is a collection of elements of the same data type, stored in contiguous memory locations. 
    Each element is accessed using an index, starting from 0.

    Steps:
    1. **Declare the Array:**
        - `int numbers[5];` declares an integer array named `numbers` with a size of 5 elements.
    2. **Initialize the Array Elements:**
        - Each element is assigned a value using its index:
            - `numbers[0] = 10;`
            - `numbers[1] = 20;`
            - `numbers[2] = 30;`
            - `numbers[3] = 40;`
            - `numbers[4] = 50;`
    3. **Print Array Elements:**
        - The `printArray` function is called to print the elements of the array.
        - The function takes the array and its size as parameters.
        - It iterates through the array and prints each element.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    numbers = [10, 20, 30, 40, 50]
    for number in numbers:
        print(number, end=" ")
    print()
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

void printArray(int arr[], int size);

int main() {
    // Declare and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print the array using the function
    printf("Array elements: ");
    printArray(numbers, 5);
    printf("\n");

    return 0;
}

// Function to print elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// The output of the above program is:
/*
Array elements: 10 20 30 40 50 
*/