/*

Author:
Vidyadhar Bendre

Email:
vidyadhar.bendre@gmail.com

Date:
28 November, 2023

Question: Temperature Conversion Functions
Task: Write functions to convert temperature between Celsius and Fahrenheit scales.

Specifications:

Create two functions:

celsiusToFahrenheit: Accepts a temperature value in Celsius and converts it to Fahrenheit.
fahrenheitToCelsius: Accepts a temperature value in Fahrenheit and converts it to Celsius.
Implement the formulas for temperature conversion:

Celsius to Fahrenheit: F = (C × 9/5) + 32
Fahrenheit to Celsius: C = (F - 32) × 5/9
Ensure the functions accurately convert temperatures and display the results with appropriate messages.

Purpose:
This program aims to facilitate temperature conversions between Celsius and Fahrenheit scales by implementing two distinct functions: celsiusToFahrenheit and fahrenheitToCelsius. These functions accurately convert temperatures and display the converted values with suitable messages.

Description:
The program defines two functions, celsiusToFahrenheit and fahrenheitToCelsius, to convert temperatures between Celsius and Fahrenheit scales. It utilizes the respective conversion formulas:

Celsius to Fahrenheit: F = (C × 9/5) + 32
Fahrenheit to Celsius: C = (F - 32) × 5/9
The main function initializes sample temperature values, calls these conversion functions, and displays the converted temperatures with appropriate messages.

Explanation:
Function Declarations:

celsiusToFahrenheit: Converts Celsius to Fahrenheit.
fahrenheitToCelsius: Converts Fahrenheit to Celsius.
Main Function:

Initializes sample temperature values for Celsius and Fahrenheit.
Calls the conversion functions with these temperature values.
Function Definitions:

celsiusToFahrenheit: Computes Fahrenheit from Celsius using the provided formula and displays the result.
fahrenheitToCelsius: Computes Celsius from Fahrenheit using the given formula and displays the result.


*/

#include <stdio.h>

// Function declarations
void celsiusToFahrenheit(float celsius);
void fahrenheitToCelsius(float fahrenheit);

int main() {
    float tempCelsius;
    float tempFahrenheit;

    // Get Celsius from keyboard

    printf("Enter temperture in Celcius :");
    scanf("%f", &tempCelsius);

    printf("\nEnter temperture in Fahrenheit :");
    scanf("%f", &tempFahrenheit);

    // Calling the functions
    celsiusToFahrenheit(tempCelsius);


    fahrenheitToCelsius(tempFahrenheit);

    celsiusToFahrenheit(18.0);
    fahrenheitToCelsius(64.4);

    return 0;
}

// Function definitions
void celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f degrees Celsius is %.2f degrees Fahrenheit\n", celsius, fahrenheit);
}

void fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f degrees Fahrenheit is %.2f degrees Celsius\n", fahrenheit, celsius);
}


// The output of the above program is

/*

Enter temperture in Celcius :18.0

Enter temperture in Fahrenheit :64.4
18.00 degrees Celsius is 64.40 degrees Fahrenheit
64.40 degrees Fahrenheit is 18.00 degrees Celsius
18.00 degrees Celsius is 64.40 degrees Fahrenheit
64.40 degrees Fahrenheit is 18.00 degrees Celsius

*/