/* 
    Author: 
    Vidyadhar Bendre
    
    Email: 
    vidyadhar.bendre@gmail.com
    
    Date: 
    November 6, 2024

    Purpose:
    This program calculates the area and perimeter (circumference) of a circle based on a given radius.

    Description:
    The program defines a constant `PI` to store the value of π (3.14159). It then takes the radius of the circle as input, calculates the area and perimeter, and displays the results.

    Formulas Used:
    - Area of a circle = PI * radius * radius
    - Perimeter (Circumference) of a circle = 2 * PI * radius

    Version History:
        Version 1.0 - [Date: 06-NOV-2024] - Initial version demonstrating area and perimeter calculations for a circle.

    Note:
    You can visualize this program's execution using Python Tutor at:
    https://pythontutor.com

*/

#include <stdio.h>

#define PI 3.14159  // Defining the constant value of pi

int main() {
    float radius, area, perimeter;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area and perimeter
    area = PI * radius * radius;           // Area calculation
    perimeter = 2 * PI * radius;            // Perimeter (circumference) calculation

    // Displaying the results
    printf("Area of the circle........................: %.2f\n", area);
    printf("Perimeter (Circumference) of the circle...: %.2f\n", perimeter);

    return 0;
}

// The output of the above program is shown as below
/*
Enter the radius of the circle: 4
Area of the circle........................: 50.27
Perimeter (Circumference) of the circle...: 25.13

Enter the radius of the circle: 1
Area of the circle........................: 3.14
Perimeter (Circumference) of the circle...: 6.28

Enter the radius of the circle: 100
Area of the circle........................: 31415.90
Perimeter (Circumference) of the circle...: 628.32

*/


