/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 9 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare and initialize an integer array

    Description:
    This program demonstrates the creation and initialization of an integer array. 
    An array is a collection of elements of the same data type, stored in contiguous memory locations. 
    Each element is accessed using an index, starting from 0.

    Steps to Create and Initialize an Array:
    1. **Declare the Array:**
        - `int numbers[5];` declares an integer array named `numbers` with a size of 5 elements.
    2. **Initialize the Array Elements:**
        - Each element is assigned a value using its index:
            - `numbers[0] = 10;`
            - `numbers[1] = 20;`
            - `numbers[2] = 30;`
            - `numbers[3] = 40;`
            - `numbers[4] = 50;`

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    numbers = [10, 20, 30, 40, 50]
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

int main() {
    // Declare an array of integers with a size of 5
    int numbers[5];

    // Initialize the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Print the initialized array elements
    printf("Initialized array: \n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d \n", i, numbers[i]);
    }
    printf("\n");

    return 0;
}

// The output of the above program is shown as below:
/*
Initialized array: 
numbers[0] = 10 
numbers[1] = 20 
numbers[2] = 30 
numbers[3] = 40 
numbers[4] = 50 
*/