#include <stdio.h>

void demonstrateBlockScope() {
    int x = 10; // Block scope (local variable to this function)
    if (x > 0) {
        int y = 20; // Block scope (local variable to this 'if' block)
        printf("Inside if block: x = %d, y = %d\n", x, y);
    }
    // printf("%d", y); // Error: 'y' is not accessible here.
}

int main() {
    demonstrateBlockScope();
    return 0;
}

//The output of the above program is:
/*
Inside if block: x = 10, y = 20
*/
