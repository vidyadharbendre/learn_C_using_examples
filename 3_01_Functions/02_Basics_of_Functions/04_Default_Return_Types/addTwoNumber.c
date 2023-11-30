/*

In C, if a function doesn't specify a return type, it's assumed to return an int. Here are a few examples demonstrating functions with no specified return type:

*/


#include <stdio.h>

// Function declaration
add(int a, int b);

int main() {
    int num1 = 5, num2 = 7;

    // Function call
    add(num1, num2);
    add(3, 7);
    add(99, 2);


    return 0;
}

// Function definition
add(int a, int b) {
    int sum = a + b;
    printf("Sum of %d and %d is: %d\n", a, b, sum);

}

// The output of the above program is

/*

Sum of 5 and 7 is: 12
Sum of 3 and 7 is: 10
Sum of 99 and 2 is: 101

*/
