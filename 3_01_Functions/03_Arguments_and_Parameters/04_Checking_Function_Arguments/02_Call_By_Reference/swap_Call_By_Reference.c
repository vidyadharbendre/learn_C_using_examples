
/*
Explanation:

swap(&x, &y);: Pass the addresses of x and y to the swap function.
void swap(int *a, int *b): Define the swap function that takes two pointers.
int temp = *a; *a = *b; *b = temp;: Use pointers to dereference values and perform the swap operation.

Call by reference: Here, the function receives references or addresses of the actual variables. Any changes made to these references affect the original variables in the calling function.

*/


#include <stdio.h>

// Function declaration
void swap(int *a, int *b);

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Calling the swap function and passing addresses of x and y
    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// The output of the above program is 

/* 

Before swap: x = 10, y = 20
After swap: x = 20, y = 10

*/