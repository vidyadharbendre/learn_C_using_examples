#include <stdio.h>

/*
Explanation:

Variable Declarations:

float radius, area_direct, area_pointer;: Declares three float variables radius, area_direct, and area_pointer.
float *ptr_area = &area_pointer;: Declares a pointer to float named ptr_area and assigns the address of area_pointer
to it.

Accepting Radius:

printf("Enter the radius of the circle: ");: Prompts the user to enter the radius of the circle.
scanf("%f", &radius);: Accepts the radius entered by the user and stores it in the variable radius.
Method 1 - Direct Calculation:

area_direct = PI * radius * radius;: Calculates the area of the circle using the direct formula and stores it in 
the variable area_direct.

Method 2 - Calculation Using Pointers:

*ptr_area = PI * radius * radius;: Calculates the area of the circle using pointers. It dereferences the pointer 
ptr_area and assigns the result to the variable area_pointer.

Displaying Results:

printf("\nArea of the circle (direct calculation): %.2f\n", area_direct);: Displays the area calculated using 
direct variables.

printf("Area of the circle (calculation through pointers): %.2f\n", area_pointer);: Displays the area calculated 
using pointers.

The confusion might arise from the fact that area_pointer is used as both a variable and through a pointer. 

In the program, area_pointer is a regular variable storing the result of the calculation through pointers. 
The pointer ptr_area is used to indirectly access and modify the value stored in area_pointer. 
The last two lines of the program display the results calculated using both methods.

*/


#define PI 3.14159

int main() {
    float radius, area_direct, area_pointer;
    float *ptr_area = &area_pointer; // Declare a pointer to float

    // Accept the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Method 1: Calculate area using direct variables
    area_direct = PI * radius * radius;

    // Method 2: Calculate area using pointers
    *ptr_area = PI * radius * radius;

    // Display the results
    printf("\nArea of the circle (direct calculation): %.2f\n", area_direct);
    printf("Area of the circle (calculation through pointers): %.2f\n", area_pointer);

    return 0;
}
