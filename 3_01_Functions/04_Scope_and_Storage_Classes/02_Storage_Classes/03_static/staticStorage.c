#include <stdio.h>

void staticStorageExample();

int main() {
    staticStorageExample(); // Output: Value of count inside function: 1
    staticStorageExample(); // Output: Value of count inside function: 2
    // 'count' is not accessible here as its scope is limited to the function it's declared in
    staticStorageExample();
    staticStorageExample();
    return 0;
}

void staticStorageExample() {
    static int count = 0; // 'count' will retain its value between function calls
    count++;
    printf("Value of count inside function: %d\n", count);
}

// The output of the above program is shown as below:

/* . 

Value of count inside function: 1
Value of count inside function: 2
Value of count inside function: 3
Value of count inside function: 4

*/