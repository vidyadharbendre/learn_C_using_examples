# Double Temperature Program

## Description

This C program, "DoubleTemperature.c," demonstrates the use of the `%lf` format specifier for double variables. The program features a double variable named `temperatureDouble`, which is declared without the 'f' suffix, as double variables are the default data type in C. The program uses `printf` statements to display the value of this variable with both default precision and precision limited to 2 decimal places.

Running this program provides insight into how precision affects the output, along with the use of the length modifier 'l' for double and the type specifier 'f' for float and 'lf' for double. It serves as a practical example to illustrate the formatting and precision control of double data types in the C programming language.

## Program Usage

1. Compile the program using a C compiler:
    ```bash
    gcc DoubleTemperature.c -o DoubleTemperature

2. Run the compiled program
    ```bash
    ./DoubleTemperature

The program will display the value of the double variable temperatureDouble with both default precision and precision limited to 2 decimal places.
