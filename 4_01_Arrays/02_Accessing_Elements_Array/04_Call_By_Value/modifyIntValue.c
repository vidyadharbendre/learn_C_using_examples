#include <stdio.h>

void modifyInt(int x);


int main() {
    int value = 10;

    printf("Original value: %d\n", value);

    modifyInt(value); // Pass the integer by value to the function

    printf("Modified by value: %d\n", value);

    return 0;
}

void modifyInt(int x) {
    x += 5; // Modify the value of the integer by adding 5
}
