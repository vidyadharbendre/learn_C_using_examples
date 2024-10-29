/*
    Name of the Program: Traffic Light Signal Response
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    
    Description: This program takes an input representing a traffic light status and 
    displays the corresponding action based on the light's color. The program categorizes 
    the light status as follows:
        - 1: Red (Stop)
        - 2: Yellow (Proceed with caution)
        - 3: Green (Go)
        - Any other value: Malfunctioning light

    Version History:
        Version 1.0 - [Date: 2024-10-28] - Initial version with instructions on 
        using PythonTutor.com to visualize C programs on mobile.

    Note:
    You can write and visualize C programs on your mobile using Python Tutor at:
    https://pythontutor.com
*/

#include <stdio.h>

int main() {
    int light;

    printf("Enter the light status (1 for red, 2 for yellow, 3 for green): ");
    scanf("%d", &light);

    // Determine action based on traffic light status using switch statement
    switch (light) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Proceed with caution\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Malfunctioning light\n");
    }

    return 0;
}

// Compilation command: gcc trafficLightSimulation.c -o trafficLightSimulation
// Execution command: ./trafficLightSimulation

/* Example Outputs:

Case 1:
Enter the light status (1 for red, 2 for yellow, 3 for green): 1
Stop

Case 2:
Enter the light status (1 for red, 2 for yellow, 3 for green): 2
Proceed with caution

Case 3:
Enter the light status (1 for red, 2 for yellow, 3 for green): 3
Go

Case 4:
Enter the light status (1 for red, 2 for yellow, 3 for green): 5
Malfunctioning light
*/
