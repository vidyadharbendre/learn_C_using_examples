/*
    Author:
    Vidyadhar Bendre

    Email:
    vidyadhar.bendre@gmail.com

    Date:
    Version 1 - 09 December 2023
    Version 2 - 12 December 2024

    Purpose:
    Declare, initialize, and access elements of a float array representing sensor readings

    Description:
    This program demonstrates the creation, initialization, and access of elements in a float array representing sensor readings. 
    The array is declared with a maximum size to accommodate potential future readings. 
    However, only a few initial sensor readings are stored in the array.

    Steps:
    1. **Declare and Initialize the Array:**
        - `float sensorReadings[MAX_READINGS] = {23.5, 24.1, 22.8, 25.3};` declares a float array named `sensorReadings` with a maximum size of `MAX_READINGS` and initializes the first four elements with sensor readings.
    2. **Access and Print Readings:**
        - A `for` loop iterates through the array and prints the reading for each sensor, formatted with one decimal place.

    **Key Point:**
    - It's important to consider the actual number of elements in the array when iterating and printing to avoid accessing uninitialized or irrelevant elements. 
    - In this case, we could introduce a variable to store the actual number of readings and use it in the loop condition.

    **Python Equivalent:**
    Python uses lists to represent arrays:
    ```python
    sensor_readings = [23.5, 24.1, 22.8, 25.3]

    for i, reading in enumerate(sensor_readings):
        print(f"Reading {i+1}: {reading:.1f}")
    ```

    **To visualize the execution step-by-step, you can use PythonTutor:**
    - Visit https://pythontutor.com/visualize.html
    - Paste the Python code and click "Visualize Execution"
*/

#include <stdio.h>

#define MAX_READINGS 50

int main() {
    float sensorReadings[MAX_READINGS] = {23.5, 24.1, 22.8, 25.3};
    int numReadings = 4; // Actual number of sensor readings

    // Accessing and printing sensor readings
    printf("Sensor Readings from IoT Devices:\n");
    for (int i = 0; i < numReadings; ++i) {
        printf("Reading %d: %.1f\n", i + 1, sensorReadings[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Sensor Readings from IoT Devices:
Reading 1: 23.5
Reading 2: 24.1
Reading 3: 22.8
Reading 4: 25.3
*/