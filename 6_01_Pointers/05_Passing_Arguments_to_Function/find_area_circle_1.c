#include <stdio.h>

#define PI 3.14159

void calculateArea(float radius, float *area);

int main() {
    float radius, area_direct, area_pointer;
    float *ptr_area = &area_pointer; // Declare a pointer to float

    // Accept the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Method 1: Calculate area using direct variables
    area_direct = PI * radius * radius;

    // Method 2: Calculate area using pointers
    calculateArea(radius, ptr_area);

    // Display the results
    printf("\nArea of the circle (direct calculation): %.2f\n", area_direct);
    printf("Area of the circle (calculation through pointers): %.2f\n", area_pointer);

    return 0;
}

// Function to calculate area using pointers
void calculateArea(float radius, float *area) {
    *area = PI * radius * radius;
}
