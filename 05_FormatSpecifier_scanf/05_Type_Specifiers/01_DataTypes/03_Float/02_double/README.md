# Double Data Type in C - scanf and Data Type

In C programming, the `double` data type is used to represent real numbers with a high degree of precision. This program demonstrates the usage of the `%lf` format specifier for double variables and showcases how to accept `double` values from the user using `scanf`. Here's a breakdown of the program:

- We declare a `double` variable, `temperatureDouble`, which represents a temperature value. This variable is used to store and manipulate real numbers.

- The program uses `printf` statements to display the value of `temperatureDouble` with both default precision and precision limited to two decimal places.

- It also demonstrates the usage of the `scanf` function to accept a `double` value from the user. The `%lf` format specifier is used with `scanf` to correctly read and store double values entered by the user.

- Running this program will help you understand how precision affects the output, how to use `%lf` with `printf`, and how to correctly handle user input of double values using `scanf`. It serves as a practical example to illustrate the formatting, precision control, and user input handling of the `double` data type in C.


## Program Usage

1. Compile the program using a C compiler:
    ```bash
    gcc DoubleTemperature.c -o DoubleTemperature

2. Run the compiled program
    ```bash
    ./DoubleTemperature

The program will display the value of the double variable temperatureDouble with both default precision and precision limited to 2 decimal places.
