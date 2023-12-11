/*
    Program Name: DoubleTemperature.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com

    Description:
    In this program, we demonstrate the usage of the %lf format specifier for double variables. The program features a double variable, `temperatureDouble`, declared without the 'f' suffix, as double variables are the default in C. We use printf statements to showcase the output of this variable with both default and 2 decimal places precision. Additionally, we demonstrate the use of `scanf` to accept a double value from the user.

    Running this program will help you understand how precision affects the output, along with the length modifier (l for double) and the type specifier (f for float and lf for double). It also shows how to use `scanf` to accept and store a double value. This program serves as a practical example to illustrate the formatting, precision control, and user input handling of double data types in C.

*/

#include <stdio.h>

int main() {
    // Declare a double variable (default to double)
    double temperatureDouble;

    // Prompt the user to enter a temperature
    printf("Enter a temperature: ");
    
    // Accept a double value using scanf
    scanf("%lf", &temperatureDouble);

    // Display the value of temperatureDouble with default and 2 decimal places precision
    printf("Double variable without 'f' suffix (default precision): %lf\n", temperatureDouble);
    printf("Double variable without 'f' suffix (2 decimal places precision): %.2lf\n", temperatureDouble);

    return 0; // Return 0 to indicate successful program execution
}

// The output of the program as shown below:

/* .     

Enter a temperature: 25.5
Double variable without 'f' suffix (default precision): 25.500000
Double variable without 'f' suffix (2 decimal places precision): 25.50

*/