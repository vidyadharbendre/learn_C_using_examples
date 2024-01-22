#include <stdio.h>

void modifyValue(int *ptr);

int main() {
    int value = 10;
    int *ptr = &value;

    printf("Original value: %d\n", value);

    // Call the modifyValue function to modify the value indirectly
    modifyValue(ptr);

    printf("Modified value: %d\n", value);

    return 0;
}

void modifyValue(int *ptr) {
    *ptr = 20;
}

// The output of the above file is shown as below
/*
Original value: 10
Modified value: 20
*/