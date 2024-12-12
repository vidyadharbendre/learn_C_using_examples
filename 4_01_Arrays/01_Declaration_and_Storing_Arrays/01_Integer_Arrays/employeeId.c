/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 12 December 2023

    Purpose:
    Declare, initialize, and access elements of an integer array representing employee IDs

    Description:
    This program demonstrates the creation, initialization, and access of elements in an integer array representing employee IDs. 
    The array is declared with a maximum size to accommodate potential future growth. 
    However, only a few initial employee IDs are stored in the array.

    Steps:
    1. **Declare and Initialize the Array:**
        - `int employeeIDs[MAX_EMPLOYEES] = {1001, 1002, 1003, 1020};` declares an integer array named `employeeIDs` with a maximum size of `MAX_EMPLOYEES` and initializes the first four elements with employee IDs.
    2. **Access and Print Employee IDs:**
        - A `for` loop iterates through the array and prints the employee ID for each index, even if the value is 0.

    **Key Point:**
    - It's important to consider the actual number of elements in the array when iterating and printing to avoid accessing uninitialized or irrelevant elements. 
    - In this case, we could introduce a variable to store the actual number of employees and use it in the loop condition.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    employee_ids = [1001, 1002, 1003, 1020]

    for i, employee_id in enumerate(employee_ids):
        print(f"Employee {i+1} ID: {employee_id}")
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

#define MAX_EMPLOYEES 100

int main() {
    int employeeIDs[MAX_EMPLOYEES] = {1001, 1002, 1003, 1020};
    int numEmployees = 4; // Actual number of employees

    // Accessing and printing employee IDs
    printf("Employee IDs:\n");
    for (int i = 0; i < numEmployees; ++i) {
        printf("Employee %d ID: %d\n", i + 1, employeeIDs[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Employee IDs:
Employee 1 ID: 1001
Employee 2 ID: 1002
Employee 3 ID: 1003
Employee 4 ID: 1020
*/