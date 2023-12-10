# Default Return Type in C Functions

In C programming, if a function doesn't specify a return type, it's assumed to return an `int`. Here's an example illustrating functions with no specified return type:

## Example

### Add Function (Default Return Type: `int`)

- **Purpose:** Add two numbers and print the sum.
- **Function Prototype:** `add(int a, int b);`

### Usage

```c
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
``` 