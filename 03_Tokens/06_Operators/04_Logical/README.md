# C Logical Operators

Logical operators in C are used to combine and manipulate conditions and values to make complex decisions in your programs. These operators help you create logical expressions that result in a true (1) or false (0) value.

Here are the primary logical operators in C, along with explanations and examples:

1. **Logical AND (&&):**
   - Operator: `&&`
   - Purpose: Checks if both conditions are true.
   - Example: `if (x > 5 && y < 10)` checks if both `x` is greater than 5 and `y` is less than 10.

2. **Logical OR (||):**
   - Operator: `||`
   - Purpose: Checks if at least one condition is true.
   - Example: `if (x == 0 || y == 0)` checks if either `x` is equal to 0 or `y` is equal to 0.

3. **Logical NOT (!):**
   - Operator: `!`
   - Purpose: Negates the condition.
   - Example: `if (!flag)` checks if `flag` is false (negating its value).

Logical operators are commonly used in conditional statements like `if`, `while`, and `for` loops to create complex conditions and determine the flow of your program.

## Using Logical Operators

You can use these operators to combine multiple conditions and create complex decision-making logic. Logical operators evaluate expressions and return either true or false.

Example:
```c
int x = 5;
int y = 10;

if (x > 2 && y < 15) {
    // This block will execute because both conditions are true.
    printf("x is greater than 2 and y is less than 15.\n");
}
The above example uses the logical AND (&&) operator to check if both conditions are true. If both conditions are met, the code block executes.

By effectively using logical operators, you can make decisions, control loops, and create advanced conditional logic in your C programs.