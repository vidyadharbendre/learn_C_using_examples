/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 09 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and access elements of a float array representing daily temperatures

    Description:
    This program demonstrates the creation, initialization, and access of elements in a float array representing daily temperatures. 
    The array is declared with a maximum size to accommodate all 24 hours of temperature readings. 
    However, only a few initial temperature readings are stored in the array.

    Steps:
    1. **Declare and Initialize the Array:**
        - `float dailyTemperatures[MAX_TEMPERATURES] = {25.5, 26.8, 27.2, 24.3};` declares a float array named `dailyTemperatures` with a maximum size of `MAX_TEMPERATURES` and initializes the first four elements with temperature readings.
    2. **Access and Print Temperatures:**
        - A `for` loop iterates through the array and prints the temperature for each hour, formatted with one decimal place.

    **Key Point:**
    - It's important to consider the actual number of elements in the array when iterating and printing to avoid accessing uninitialized or irrelevant elements. 
    - In this case, we could introduce a variable to store the actual number of temperature readings and use it in the loop condition.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    daily_temperatures = [25.5, 26.8, 27.2, 24.3]

    for i, temperature in enumerate(daily_temperatures):
        print(f"Hour {i+1}: {temperature:.1f}°C")
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

#define MAX_TEMPERATURES 24

int main() {
    float dailyTemperatures[MAX_TEMPERATURES] = {25.5, 26.8, 27.2, 24.3};
    int numTemperatures = 4; // Actual number of temperature readings

    // Accessing and printing daily temperatures
    printf("Daily Temperatures:\n");
    for (int i = 0; i < numTemperatures; ++i) {
        printf("Hour %d: %.1f°C\n", i + 1, dailyTemperatures[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Daily Temperatures:
Hour 1: 25.5°C
Hour 2: 26.8°C
Hour 3: 27.2°C
Hour 4: 24.3°C
*/