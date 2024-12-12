/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 9 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and access elements of an integer array

    Description:
    This program demonstrates the creation, initialization, and access of elements in an integer array. 
    An array is a collection of elements of the same data type, stored in contiguous memory locations. 
    Each element is accessed using an index, starting from 0.

    Steps to Create, Initialize, and Access Array Elements:
    1. **Declare the Array:**
        - `int numbers[5];` declares an integer array named `numbers` with a size of 5 elements.
    2. **Initialize the Array Elements:**
        - Each element is assigned a value using its index:
            - `numbers[0] = 10;`
            - `numbers[1] = 20;`
            - `numbers[2] = 30;`
            - `numbers[3] = 40;`
            - `numbers[4] = 50;`
    3. **Access Specific Elements:**
        - `secondNumber = numbers[1];` accesses the second element (index 1).
        - `fourthNumber = numbers[3];` accesses the fourth element (index 3).
    4. **Print Array Elements:**
        - A `for` loop iterates through the array and prints each element.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    numbers = [10, 20, 30, 40, 50]
    print(numbers[1])  # Access the second element
    print(numbers[3])  # Access the fourth element
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

int main() {
    // Declare an array of integers with a size of 5
    int numbers[5], secondNumber, fourthNumber, i;

    // Initialize the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Access and print the second and fourth elements
    secondNumber = numbers[1];
    fourthNumber = numbers[3];
    printf("Second number: %d\n", secondNumber);
    printf("Fourth number: %d\n", fourthNumber);

    // Print all elements of the array
    printf("Array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

// The ouput of the above program is shown as below:
/*
Second number: 20
Fourth number: 40
Array elements: 10 20 30 40 50 
*/