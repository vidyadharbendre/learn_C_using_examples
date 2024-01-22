#include <stdio.h>

int main() {
    // Declare an array of pointers to integers
    int *ptrArray[5];

    // Declare and initialize some integers
    int num1 = 10, num2 = 20, num3 = 30, num4 = 40, num5 = 50;

    // Assign the addresses of the integers to the elements of the pointer array
    ptrArray[0] = &num1;
    ptrArray[1] = &num2;
    ptrArray[2] = &num3;
    ptrArray[3] = &num4;
    ptrArray[4] = &num5;

    // Access and print the values using the array of pointers
    for (int i = 0; i < 5; i++) {
        printf("Value at ptrArray[%d]: %d\n", i, *ptrArray[i]);
    }

    return 0;
}

// The output of the above program is shown as below
/*
Value at ptrArray[0]: 10
Value at ptrArray[1]: 20
Value at ptrArray[2]: 30
Value at ptrArray[3]: 40
Value at ptrArray[4]: 50
*/