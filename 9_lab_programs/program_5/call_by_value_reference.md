# Call by Value vs Call by Reference in C

This document explains the difference between **Call by Value** and **Call by Reference** in C programming, demonstrated with examples. These concepts are essential for understanding how data is passed to functions in C.

---

## Call by Value

### Definition

In **Call by Value**, the actual values of the variables are **copied** into the function's parameters. The function operates on these copies and does not affect the original variables.

### Key Features

- The function works on a **copy** of the data.
- **Changes made** inside the function do **not reflect** on the original variables.
- **Separate memory** is allocated for the function's parameters.

### Example: Call by Value

```c
#include <stdio.h>

void swapUsingLocals(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function: a = %d, b = %d\n", a, b); // Values swapped within function
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapUsingLocals(num1, num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2); // Values remain unchanged
    return 0;
}
```
## Call by Reference
### Definition
In Call by Reference, the memory addresses of the variables are passed to the function. The function works on the actual variables, and changes made inside the function reflect in the original variables.

### Key Features
The function operates on the actual variables, not copies.
Changes made inside the function reflect on the original variables.
No new memory is allocated for the parameters.
### Example: Call by Reference


```c
#include <stdio.h>

void swapUsingPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapUsingPointers(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2); // Values swapped
    return 0;
}
```