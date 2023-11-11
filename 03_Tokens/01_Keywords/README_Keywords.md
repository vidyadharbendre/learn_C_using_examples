# Keywords in C Programming

In C programming, keywords are reserved words that have special meanings and purposes. These words cannot be used as identifiers and are crucial for defining program structure, control flow, and data types.

## Overview

Keywords play a vital role in the C programming language. They are used to define the fundamental aspects of a program, including data types, control flow structures, and other essential elements. Here are some examples of C keywords:

- `int`: Defines an integer data type.
- `float`: Defines a floating-point data type.
- `char`: Defines a character data type.
- `if`: Used for conditional execution.
- `else`: Part of the conditional execution structure.
- `while`: Used for loop control.
- `for`: Used for loop control with initialization, condition, and iteration expressions.
- `return`: Used to exit a function and optionally provide a return value.
- `void`: Indicates that a function does not return a value.
- `sizeof`: Used to determine the size of a data type in bytes.
- `enum`: Used to define an enumeration type.

## Examples

```c

### 1. `int` - Integer Variable Declaration

```c
int age = 30; 

Declares an integer variable named age and initializes it with the value 30.

### 2. float - Floating-Point Variable Declaration

```c
float pi = 3.14;

Declares a floating-point variable named pi and initializes it with the value 3.14.

### 3. char - Character Variable Declaration
```c
char grade = 'A';

Declares a character variable named grade and initializes it with the character 'A'.

### 4. if - Conditional Execution

```c
if (score > 80) {
    printf("First class with Distinction");
}

Used for conditional execution based on the value of the variable score.

### 5. else - Alternative Execution

```c
if (temperature > 30) {
    printf("It's hot outside.\n");
} else {
    printf("The weather is pleasant.\n");
}

Used in conjunction with if to provide an alternative execution path.

### 6. while - Looping (Repeated Execution)

```c

int i = 1;
while (i <= 5) {
    printf("Count: %d\n", i);
    i++;
}

Used for repeated execution of a block of code while a condition is true.

### 7. for - Creating Loops with a Defined Structure

```c

for (int i = 0; i < 5; i++) {
    printf("Iteration %d\n", i);
}

Creates a loop with an initialization expression, condition, and iteration expression.

### 8. return - Exiting a Function with an Optional Return Value

```c

int add(int a, int b) {
    return a + b;
}

### 9. void - Indicating a Function Does Not Return a Value

```c

void sayHello() {
    printf("Hello, World!\n");
}

Indicates that the function sayHello does not return a value.

### 10. sizeof - Determining the Size in Bytes of Data Type or Expression

```c

int size = sizeof(int);

Used to determine the size in bytes of the int data type.

### 11. enum - Defining an Enumeration Type

```c

enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

Defines an enumeration type named Day with days of the week.



























