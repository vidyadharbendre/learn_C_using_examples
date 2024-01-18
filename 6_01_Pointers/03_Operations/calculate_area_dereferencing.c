#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area_direct, area_pointer;
    float *ptr_radius = &radius; // Declare a pointer to float for the radius
    float *ptr_area = &area_pointer; // Declare a pointer to float for the area

    // Accept the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", ptr_radius);

    // Method 1: Calculate area using direct variables
    area_direct = PI * radius * radius;

    // Method 2: Calculate area using the address of the pointer to radius
    *ptr_area = PI * (*ptr_radius) * (*ptr_radius);

    // Display the results
    printf("\nArea of the circle (direct calculation): %.2f\n", area_direct);
    printf("Area of the circle (calculation using address of the pointer): %.2f\n", *ptr_area);
    printf("Area of the circle (calculation using address of the pointer): %.2f\n", area_pointer);
    return 0;
}

// The output of the above program is shown as below
/*
Enter the radius of the circle: 100

Area of the circle (direct calculation): 31415.90
Area of the circle (calculation using address of the pointer): 31415.90
Area of the circle (calculation using address of the pointer): 31415.90
*/
