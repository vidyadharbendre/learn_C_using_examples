/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 12 December 2023

    Purpose:
    Declare, initialize, access, and modify elements of an integer array

    Description:
    This program demonstrates the creation, initialization, access, and modification of elements in an integer array. 
    An array is a collection of elements of the same data type, stored in contiguous memory locations. 
    Each element is accessed and modified using an index, starting from 0.

    Steps to Create, Initialize, Access, and Modify Array Elements:
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
    5. **Modify Array Elements:**
        - `numbers[2] = 66;` changes the value of the third element (index 2).
        - `numbers[4] += 50;` adds 50 to the value of the fifth element (index 4).
    6. **Print Modified Array:**
        - Another `for` loop prints the modified array elements.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    numbers = [10, 20, 30, 40, 50]
    print(numbers[1])  # Access the second element
    print(numbers[3])  # Access the fourth element

    numbers[2] = 66  # Modify the third element
    numbers[4] += 50  # Add 50 to the fifth element

    print(numbers)  # Print the modified list
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

void displayArray(int fnumbers[], int fsize);


int main() {
    // Declare an array of integers with a size of 5
    int numbers[5], secondNumber, fourthNumber, i, size;

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
    printf("Initial array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Modify array elements
    numbers[2] = 66; // Change the value of the third element (index 2)
    numbers[4] += 50; // Add 50 to the value of the fifth element (index 4)

    // Print the modified array
    printf("Modified array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Print an Arry using function: \n");
    displayArray(numbers, size);
    return 0;
}

void displayArray(int fnumbers[], int fsize){
    int fi;
    for(fi=0; fi < fsize; fi++){
        printf("length[%d] =  %d\n", fi, fnumbers[fi]);
    }
    printf("\n");
    
}