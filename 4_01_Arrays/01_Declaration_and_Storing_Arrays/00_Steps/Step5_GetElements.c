/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 09 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and manipulate elements of an integer array dynamically

    Description:
    This program demonstrates the creation, initialization, and manipulation of elements in an integer array dynamically. 
    The array size is determined by user input, and the program ensures that it doesn't exceed a maximum size.

    Steps:
    1. **Declare an Array with Maximum Size:**
        - `int data[MAX_SIZE];` declares an integer array with a maximum size of `MAX_SIZE`.
    2. **Get Array Size from User:**
        - The `getCount` function prompts the user to enter the desired number of elements.
    3. **Validate Input:**
        - The program checks if the input count exceeds the maximum size.
    4. **Get Data from User:**
        - The `getData` function prompts the user to enter the data points.
    5. **Display Array Elements:**
        - The `displayData` function prints the elements of the array.

    **Python Equivalent:**
    Python uses lists to represent arrays, which can dynamically grow or shrink:
    ```python
    max_size = 10
    count = int(input("Enter the number of elements: "))

    if count > max_size:
        print("Input count exceeds the maximum size allowed.")
    else:
        numbers = []
        for i in range(count):
            number = int(input(f"Enter element {i+1}: "))
            numbers.append(number)

        print("Array elements:", numbers)
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

#define MAX_SIZE 10

int getCount();
void getData(int data[], int count);
void displayData(int data[], int count);

int main() {
    int count;
    int data[MAX_SIZE]; // Declare an array with a maximum size

    count = getCount();

    if (count > MAX_SIZE) {
        printf("Input count exceeds the maximum size allowed.\n");
        return 1;
    }

    getData(data, count);
    displayData(data, count);

    return 0;
}

// Function to get the count of data points from the user
int getCount() {
    int count;
    printf("Enter the number of elements (maximum %d): ", MAX_SIZE);
    scanf("%d", &count);
    return count;
}

// Function to get data points from the user
void getData(int data[], int count) {
    printf("Enter the elements:\n");
    for (int i = 0; i < count; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data[i]);
    }
}

// Function to display the array elements
void displayData(int data[], int count) {
    printf("Array elements: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

// The output of the above program is shown as below:
/*
Enter the number of elements (maximum 10): 3
Enter the elements:
Element 1: 11
Element 2: 22
Element 3: 33
Array elements: 11 22 33 
*/