/* . 
Purpose: 
Demonstrate modular programming by calculating area and perimeter of a rectangle.

Description:
This program showcases modular programming concepts by splitting the calculation of area and perimeter of a rectangle into separate functions (modules).

It exemplifies code modularity, reusability, and readability by encapsulating specific functionalities in individual modules and integrating them in the main function.

*/
#include <stdio.h>

double calculateArea(double flength, double fwidth);
double calculatePerimeter(double flength, double fwidth);

int main() {
    double length = 5.0;
    double width = 3.0;
    double area, perimeter;

    // Calculate area using Module A
    area = calculateArea(length, width);

    // Calculate perimeter using Module B
    perimeter = calculatePerimeter(length, width);

    // Display results
    printf("Rectangle - Length: %.2f, Width: %.2f\n", length, width);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}

// Module A: Function to calculate area
double calculateArea(double flength, double fwidth) {
    return flength * fwidth;
}

// Module B: Function to calculate perimeter
double calculatePerimeter(double flength, double fwidth) {
    return 2 * (flength + fwidth);
}

// The output of the above program is shown below:
/*

Rectangle - Length: 5.00, Width: 3.00
Area: 15.00
Perimeter: 16.00

*/
