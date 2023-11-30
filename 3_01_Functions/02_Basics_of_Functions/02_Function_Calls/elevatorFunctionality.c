#include <stdio.h>

// Function declaration
void moveToFloor(int floor);

int main() {
    int desiredFloor = 5;

    // Function call
    moveToFloor(desiredFloor);

    return 0;
}

// Function definition
void moveToFloor(int floor) {
    printf("Moving to floor %d...\n", floor);
}
