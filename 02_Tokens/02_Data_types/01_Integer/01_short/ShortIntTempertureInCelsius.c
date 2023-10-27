/* Program Name: ShortIntTempertureInCelsius.c
   Author: Vidyadhar Bendre
   Email: vidyadhar.bendre@gmail.com
   Description: In this example, we have declared a short int variable named temperature, which represents the current temperature in degrees Celsius. When we use the %hd format specifier in the printf statement, it tells the program to print a short integer, matching the data type of the temperature variable. The output will display the current temperature in degrees Celsius as a short integer.

*/

#include <stdio.h>

int main() {
    // Declare a short integer variable named 'temperature' and assign a value of -5.
    short int temperature = -5; // An example temperature in Celsius
    short questionMark = -42; // int is implicit over here

    // Print a message to the console, including the value of 'temperature' in degrees Celsius.
    printf("The current temperature is %hd degrees Celsius.\n", temperature);

    printf("Printing question mark with defined specifier: %hd\n", questionMark);
    printf("Printing question mark with defined specifier: %d\n", questionMark);

    printf("Printing questionMark using type specifier: %c\n", questionMark);

    // Return 0 to indicate successful program execution.
    return 0;
}
