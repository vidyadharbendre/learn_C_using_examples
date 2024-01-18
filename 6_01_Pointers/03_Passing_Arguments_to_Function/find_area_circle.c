#include <stdio.h>

#define PI 3.14159

void calculateAreaDirect(float radius, float *area);
void calculateAreaPointer(float radius, float *area);
void calculateAreaUsingPointerToRadius(float *point_to_radius, float *area);

int main() {
    float radius, area_direct, area_pointer, area_pointer_to_radius;
    float *ptr_area = &area_pointer; // Declare a pointer to float
    float radius_variable; // Declare a float variable to store the radius for the third method
    float *point_to_radius = &radius_variable; // Declare a pointer to float for the third method

    // Accept the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Method 1: Calculate area using direct variables
    calculateAreaDirect(radius, &area_direct);

    // Method 2: Calculate area using pointers
    calculateAreaPointer(radius, ptr_area);

    // Method 3: Calculate area using pointer to radius
    calculateAreaUsingPointerToRadius(&radius, &area_pointer_to_radius);

    // Display the results
    printf("\nArea of the circle (direct calculation): %.2f\n", area_direct);
    printf("Area of the circle (calculation through pointers): %.2f\n", area_pointer);
    printf("Area of the circle (calculation using pointer to radius): %.2f\n", area_pointer_to_radius);

    return 0;
}

// Function to calculate area using direct variables
void calculateAreaDirect(float radius, float *area) {
    *area = PI * radius * radius;
}

// Function to calculate area using pointers
void calculateAreaPointer(float radius, float *area) {
    *area = PI * radius * radius;
}

// Function to calculate area using pointer to radius
void calculateAreaUsingPointerToRadius(float *point_to_radius, float *area) {
    *area = PI * (*point_to_radius) * (*point_to_radius);
}

// The output of the above program is shown as below
/*
Enter the radius of the circle: 1.0

Area of the circle (direct calculation): 3.14
Area of the circle (calculation through pointers): 3.14
Area of the circle (calculation using pointer to radius): 3.14
*/

/*
Enter the radius of the circle: 10.0

Area of the circle (direct calculation): 314.16
Area of the circle (calculation through pointers): 314.16
Area of the circle (calculation using pointer to radius): 314.16
*/
