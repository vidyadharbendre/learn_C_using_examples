# Floating-Point Data Type in C - scanf and Data Type

In C programming, floating-point data types such as `float` are used to represent real numbers with fractional parts. This program showcases the use of float variables with varying precision and format specifiers, demonstrating how to accept user input for float values using `scanf`. Here's a breakdown of the program:

- We declare three float variables: `temperatureFloatWithF`, `temperatureFloatWithoutF`, and `priceFloat`. These variables represent temperature and price values with different precision requirements. `temperatureFloatWithF` is explicitly defined as a float using the 'f' suffix.

- The program uses `scanf` to accept user input for these float variables, prompting the user to enter temperature and price values.

- It displays the accepted values of the float variables with both default and specified precisions, showing examples of 2 and 7 decimal places.

- This program serves as an illustrative guide on how to format and present floating-point numbers in C, providing insight into precision control, format specifiers, and user input handling for float data types.


## Program Usage

1. Compile the program using a C compiler:
   ```bash
   gcc FloatingPointTemperature.c -o FloatingPointTemperature

2. Run the compiled program
    ```bash
   ./FloatingPointTemperature

The program will display the values of the float variables with different precisions to demonstrate how format specifiers affect the output.