#include <stdio.h>

// Function Declaration

void displayNumber(int num);

int main() {
    int number = 10;
    displayNumber(number);
    return 0;
}


// Function with parameters
void displayNumber(int num) {
    printf("The existing number is: %d\n", num);
}