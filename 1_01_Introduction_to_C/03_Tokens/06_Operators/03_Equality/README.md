# C Equality Operators

Equality operators in C are used to compare values for equality or inequality. They help you determine whether two values are the same or different. These operators are essential for making decisions and controlling program flow based on the equality or inequality of data.

Here are the primary equality operators in C, along with explanations and examples:

1. **Equal to (==):**
   - Operator: `==`
   - Purpose: Checks if two values are equal.
   - Example: `if (x == y)` checks if the value of `x` is equal to the value of `y`.

2. **Not equal to (!=):**
   - Operator: `!=`
   - Purpose: Checks if two values are not equal.
   - Example: `if (x != y)` checks if the value of `x` is not equal to the value of `y`.

Equality operators are frequently used in conditional statements such as `if`, `else if`, and `switch` to compare values and make decisions based on whether they are equal or not.

## Using Equality Operators

You can use these operators to create conditional statements that control the behavior of your program based on the equality or inequality of variables and values. Equality operators return true (1) or false (0) based on the results of these comparisons.

Example:
```c
int x = 10;
int y = 20;

if (x != y) {
    // This block will execute because 10 is not equal to 20.
    printf("x is not equal to y.\n");
}
The above example demonstrates how the not equal to (!=) operator compares the values of x and y, leading to the execution of the code block when the condition is true.

By effectively using equality operators, you can make decisions and control the flow of your C programs based on the equality or inequality of data.