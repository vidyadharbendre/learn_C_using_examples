#include <stdio.h>

#define PI 3.14159

/*
    Program to calculate the area of a circle.
    
    Author: 
    Vidyadhar Bendre
    
    Date: 
    November 11, 2024
    
    Purpose:
    This program calculates the area of a circle using the formula:
    Area = π * radius^2.
    It demonstrates implicit type conversion by defining the radius as an 
    integer and the area as a float.

    Explanation:
    - Radius is an integer, but the formula requires floating-point 
      multiplication (due to π and the result being a decimal).
    - Implicit type conversion occurs when the integer radius is converted 
      to a float during the computation of the area.
*/

int main() {
    int radius;         // Radius as an integer
    float area;         // Area as a floating-point value

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle (integer value)...: ");
    scanf("%d", &radius);

    // Calculate the area (implicit conversion happens here)
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %d is.........: %.2f square units.\n", radius, area);

    return 0;
}

// The output of the above program is shown as below:

/*
Enter the radius of the circle (integer value)...: 10
The area of the circle with radius 10 is.........: 314.16 square units.
*/