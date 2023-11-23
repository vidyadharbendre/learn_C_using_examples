## Definition of Functions

Functions in programming languages are blocks of code that perform a specific task. In C, functions consist of a function declaration, a function definition, and a function call.


Think of a function as a recipe in a cookbook. The recipe has a name (function name), ingredients and steps to follow (function definition), and when you want to make that dish, you follow the recipe (function call) to get the dish you want.

Let's break it down further:

## 1 Declaration: 

Before you cook, you read the recipe to understand what it needs (function declaration). 

For example 1 :


```c

void bakeCake(); // This tells the program that there's a function named 'bakeCake' which will be defined later

```

## 2 Definition:

Now you write the detailed steps to prepare the dish (function definition). This is like writing the steps of the recipe:

```c

void bakeCake() {
    printf("Mix ingredients, bake in oven, enjoy your cake!\n");
}

```

## 3 Calling the Function:

When you want to have the cake, you follow the steps in the recipe (function call):

```c

int main() {
    bakeCake(); // This actually executes the 'bakeCake' function
    return 0;
}

```
Second Example:

```c

#include <stdio.h>

// Function declaration
void greet() {
    printf("Hello, welcome to functions in C!\n");
}

// Main function
int main() {
    // Function call
    greet();
    return 0;
}

```






This way, whenever you want to make a cake (use the function), you just call the recipe (function) without rewriting all the steps. Functions help you avoid repeating code, just like using a recipe saves you from memorizing cooking steps every time you want to make a dish.



