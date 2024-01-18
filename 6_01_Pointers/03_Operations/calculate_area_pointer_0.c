#include <stdio.h>

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
    area_pointer = PI * radius * radius;

    // Display the results
    printf("\nArea of the circle (direct calculation): %.2f\n", area_direct);
    printf("Area of the circle (calculation through pointers): %.2f\n", area_pointer);

    return 0;
}

// The output of the above program is shown as below
/*
Enter the radius of the circle: 10

Area of the circle (direct calculation): 314.16
Area of the circle (calculation through pointers): 314.16
*/
