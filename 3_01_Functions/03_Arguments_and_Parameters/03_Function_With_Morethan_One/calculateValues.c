#include <stdio.h>

// Function declaration
void calculateValues(int num, int *square, int *cube);

int main() {
    int number = 5;
    int square, cube;

    // Function call by reference
    calculateValues(number, &square, &cube);

    // Displaying the updated values after the function call
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

    return 0;
}

// Function definition
void calculateValues(int num, int *square, int *cube) {
    // Modifying the values indirectly using pointers
    *square = num * num;  // Calculating square
    *cube = num * num * num;  // Calculating cube
}
