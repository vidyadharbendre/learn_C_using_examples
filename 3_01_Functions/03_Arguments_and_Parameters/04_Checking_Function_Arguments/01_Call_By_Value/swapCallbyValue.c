#include <stdio.h>


/*


In call by value, the function receives copies of the values passed to it, so modifications made within the function won't affect the original variables in the calling code. If you print the values of a and b within the swap function in a call by value scenario, you'll see the values of the copies, not the original values from the calling function. This is because changes within the function are isolated to those copies and don't impact the originals.

Explanation:

swap(x, y);: Pass the values of x and y to the swap function.
void swap(int a, int b): Define the swap function that takes two integer parameters.
int temp = a; a = b; b = temp;: Swap operation performed on the local copies of a and b. However, this doesn't affect the original variables x and y in main as they are passed by value.

Call by value: In this approach, the function receives copies of the arguments passed to it. Changes made to these copies don't affect the original values in the calling function.

*/






// Function declaration
void swap(int a, int b);

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Calling the swap function and passing x and y
    swap(x, y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition
void swap(int a, int b) {
    printf("Inside swap function - Before swap: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap function - After swap: a = %d, b = %d\n", a, b);
}

/*

Before swap: x = 10, y = 20
Inside swap function - Before swap: a = 10, b = 20
Inside swap function - After swap: a = 20, b = 10
After swap: x = 10, y = 20

*/