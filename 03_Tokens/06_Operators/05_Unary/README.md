# C Unary Operators

Unary operators in C work with a single operand and perform various operations on that operand. These operators are essential for incrementing, decrementing, negating, or addressing variables in your C programs.

Here are the primary unary operators in C, along with explanations and examples:

1. **Unary Plus (+):**
   - Operator: `+`
   - Purpose: Represents a positive value. It doesn't change the operand's sign.
   - Example: `int a = +5;` assigns the positive value 5 to variable `a`.

2. **Unary Minus (-):**
   - Operator: `-`
   - Purpose: Negates the operand's value, changing it from positive to negative and vice versa.
   - Example: `int b = -7;` assigns the negative value -7 to variable `b`.

3. **Increment (++):**
   - Operator: `++`
   - Purpose: Increases the operand's value by 1.
   - Example: `int x = 10; x++;` increments `x` by 1, making it 11.

4. **Decrement (--):**
   - Operator: `--`
   - Purpose: Decreases the operand's value by 1.
   - Example: `int y = 8; y--;` decrements `y` by 1, making it 7.

5. **Logical NOT (!):**
   - Operator: `!`
   - Purpose: Negates the condition, making true (1) into false (0) and vice versa.
   - Example: `if (!flag)` checks if `flag` is false, negating its value.

Unary operators are used in various programming scenarios, such as manipulating variables, implementing decision-making logic, and looping.

## Using Unary Operators

You can utilize these operators to change values, increment or decrement variables, or negate conditions. Unary operators are an integral part of C programming and are frequently used in real-world applications.

Example:
```c
int a = 5;
int b = -7;

a++; // Incrementing 'a' by 1
b--; // Decrementing 'b' by 1

printf("a is %d, and b is %d.\n", a, b); // Prints "a is 6, and b is -8."

In the above example, we increment a by 1 and decrement b by 1 using the ++ and -- unary operators, respectively.

By mastering unary operators, you can efficiently manipulate variables and control program flow in your C code.