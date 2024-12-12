/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 09 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and access elements of a float array representing distance measurements

    Description:
    This program demonstrates the creation, initialization, and access of elements in a float array representing distance measurements. 
    The array is declared with a maximum size to accommodate all 24 measurements. 
    However, only a few initial distance measurements are stored in the array.

    Steps:
    1. **Declare and Initialize the Array:**
        - `float distances[MAX_DISTANCES] = {15.2, 20.5, 18.9, 30.1};` declares a float array named `distances` with a maximum size of `MAX_DISTANCES` and initializes the first four elements with distance measurements.
    2. **Access and Print Distances:**
        - A `for` loop iterates through the array and prints the distance for each measurement, formatted with one decimal place.

    **Key Point:**
    - It's important to consider the actual number of elements in the array when iterating and printing to avoid accessing uninitialized or irrelevant elements. 
    - In this case, we could introduce a variable to store the actual number of distance measurements and use it in the loop condition.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    distances = [15.2, 20.5, 18.9, 30.1]

    for i, distance in enumerate(distances):
        print(f"Measurement {i+1}: {distance:.1f} miles")
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

#define MAX_DISTANCES 24

int main() {
    float distances[MAX_DISTANCES] = {15.2, 20.5, 18.9, 30.1};
    int numDistances = 4; // Actual number of distance measurements

    // Accessing and printing distance measurements
    printf("Distance Measurements in a Journey:\n");
    for (int i = 0; i < numDistances; ++i) {
        printf("Measurement %d: %.1f miles\n", i + 1, distances[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Distance Measurements in a Journey:
Measurement 1: 15.2 miles
Measurement 2: 20.5 miles
Measurement 3: 18.9 miles
Measurement 4: 30.1 miles
*/