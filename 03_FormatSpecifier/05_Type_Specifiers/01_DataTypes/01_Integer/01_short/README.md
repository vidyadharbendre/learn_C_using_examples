# C Program: Short Integer Example (Temperature)

This is a simple C program that demonstrates the use of a `short int` variable to represent the current temperature in degrees Celsius. It also includes a `printf` statement to display the temperature.

## Program Details

- The program declares a `short int` variable named `temperature`.
- A value of -5 is assigned to the `temperature` variable, representing the current temperature in Celsius.
- The program uses the `printf` function to display a message along with the value of `temperature` & `questionMark`. It utilizes the `%hd` format specifier to indicate that the variable is a short integer.

## Code Description

The provided C program demonstrates the use of format specifiers in `printf` statements. Here's a breakdown of the code:

1. In the first `printf` statement, the format specifier `%hd` is correctly used to print the `short int` variable `temperature`.

2. In the second and third `printf` statements, both `%hd` and `%d` format specifiers are demonstrated for the `short` variable `questionMark`. While `%hd` is specific to `short` integers, `%d` is a more general specifier that can be used for both `short` and `int` types.

3. In the fourth `printf` statement, the `%c` format specifier is used to print the `short` variable `questionMark` as a character. The result is the character represented by the ASCII code `-42`. It's important to note that this character may not be a visible character and may vary depending on the character encoding.

## Running the Program

1. Ensure you have a C compiler installed on your system (e.g., GCC).
2. Save the program to a file with a `.c` extension (e.g., `ShortIntTempertureInCelsius.c`).
3. Compile the program using the following command:

   ```bash
   gcc ShortIntTempertureInCelsius.c -o ShortIntTempertureInCelsius
