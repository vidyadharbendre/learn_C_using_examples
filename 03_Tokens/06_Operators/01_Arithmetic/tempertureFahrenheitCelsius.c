/* .  

    Author  : Vidyadhar Bendre
    Email   : vidyadhar.bendre@gmail.com
    Description:
    This program demonstrates temperature conversion between Fahrenheit and Celsius using arithmetic operations in C.

    Purpose:
    - Prompt the user to enter a temperature in Fahrenheit.
    - Use arithmetic operators to convert the temperature to Celsius.
    - Display the converted temperature in Celsius.
    - Perform the reverse conversion, converting Celsius back to Fahrenheit.
    - Display the converted temperature in Fahrenheit.

    The program will prompt you to enter a temperature in Fahrenheit, and it will provide the converted values in Celsius and Fahrenheit.

*/
#include <stdio.h>

int main() {
    // Declare variables for Fahrenheit and Celsius temperatures
    float fahrenheit, celsius;

    // Prompt the user to enter a temperature in Fahrenheit
    printf("Enter a temperature in Fahrenheit...: ");
    scanf("%f", &fahrenheit);

    // Perform the Fahrenheit to Celsius conversion
    celsius = ((fahrenheit - 32) * 5.0) / 9.0;

    // Display the converted temperature in Celsius
    printf("Temperature in Celsius..............: %.2f\n", celsius);

    // Now, let's convert the Celsius temperature back to Fahrenheit
    fahrenheit = (celsius * 9.0) / (5.0) + 32;

    // Display the converted temperature in Fahrenheit
    printf("Temperature in Fahrenheit...........: %.2f\n", fahrenheit);

    return 0;
}

/* .  

Here are some sample values you can use to test the program:

Test with Freezing Temperature: Fahrenheit: 32.0 (the freezing point of water)

Enter a temperature in Fahrenheit...: 32
Temperature in Celsius..............: 0.00
Temperature in Fahrenheit...........: 32.00

Test with Boiling Temperature: Fahrenheit: 212.0 (the boiling point of water)

Enter a temperature in Fahrenheit...: 212
Temperature in Celsius..............: 100.00
Temperature in Fahrenheit...........: 212.00


Test with a High Temperature: Fahrenheit: 100.0

Enter a temperature in Fahrenheit...: 100
Temperature in Celsius..............: 37.78
Temperature in Fahrenheit...........: 100.00

*/





