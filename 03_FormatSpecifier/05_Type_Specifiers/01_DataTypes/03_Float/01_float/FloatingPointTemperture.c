/*
    Program Name: FloatingPointTemperature.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    In this example, a C program showcases the use of float variables with varying precision and format specifiers. Three float variables are declared: temperatureFloatWithF, explicitly defined as a float using the 'f' suffix, temperatureFloatWithoutF, a float by default, and priceFloat, which demonstrates more decimal places for precision. The printf statements display these variables with both default and specified precisions, with examples of 2 and 7 decimal places. This program serves as an illustrative guide on how to format and present floating-point numbers in C, providing insight into precision control and format specifiers for float data types.
*/

#include <stdio.h>

int main() {
    // Declare a float variable with 'f' suffix (explicitly a float)
    float temperatureFloatWithF = 25.5f;

    // Declare a float variable without 'f' suffix (still treated as a float)
    float temperatureFloatWithoutF = 25.5;

    // Declare another float variable with a different value and precision
    float priceFloat = 12.3456789f;

    // Display the value of temperatureFloatWithF with default and 2 decimal places precision
    printf("Float variable with 'f' suffix (default precision): %f\n", temperatureFloatWithF);
    printf("Float variable with 'f' suffix (2 decimal places precision): %.2f\n", temperatureFloatWithF);

    // Display the value of temperatureFloatWithoutF with default and 2 decimal places precision
    printf("Float variable without 'f' suffix (default precision): %f\n", temperatureFloatWithoutF);
    printf("Float variable without 'f' suffix (2 decimal places precision): %.2f\n", temperatureFloatWithoutF);

    // Display the value of priceFloat with 7 decimal places precision
    printf("Another float variable with more precision: %.7f\n", priceFloat);

    // Display the value of priceFloat default precision
    printf("Default precision: %f\n", priceFloat);

    // Display the value of priceFloat with 7 decimal places precision
    printf("Default precision: %0.3f\n", priceFloat);


    return 0; // Return 0 to indicate successful program execution
}
