#include <stdio.h>

// Function declaration
int square(int num);

int main() {
    int number = 5;
    int result;

    // Function call
    result = square(number);
    printf("Square of %d is: %d\n", number, result);

    // Function call
    result = square(10);
    printf("Square of %d is: %d\n", 10, result);

    // Function call
    result = square(20);
    printf("Square of %d is: %d\n", 20, result);




    return 0;
}

// Function definition
int square(int num) {
    return num * num;
}

// The outout of the above program is

/*

Square of 5 is: 25
Square of 10 is: 100
Square of 20 is: 400


*/