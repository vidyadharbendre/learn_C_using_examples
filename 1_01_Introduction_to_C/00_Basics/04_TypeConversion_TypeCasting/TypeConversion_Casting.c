/* .  

Author:
Vidyadhar

Email:
vidyadhar.bendre@gmail.com

Data:
8th November, 2023

Purpose:
This C program demonstrates the concepts of type conversion and type casting.

Description:
The program showcases both implicit type conversion and explicit type casting.

1. Implicit Type Conversion (Type Conversion):
    - An integer value is assigned to a float variable.
    - The compiler automatically performs the conversion.
    - The result is then printed using printf.

2. Explicit Type Casting:
    - A float value is explicitly cast to an integer using (int).
    - The programmer specifies the desired data type for conversion.
    - The result is printed using printf.

The program provides insights into how C handles data type conversions and the explicit control
a programmer has over type casting in specific scenarios.

*/

#include <stdio.h>

int main() {
    // Type Conversion (Implicit)
    int integerNumber = 10;
    float floatNumber = integerNumber;  // Implicit conversion from int to float
    printf("Implicit Conversion: int to float - Result...: %f\n", floatNumber);

    // Type Casting (Explicit)
    float floatValue = 15.75;
    int intValue = (int) floatValue;  // Explicit casting from float to int
    printf("Explicit Type Casting: float to int - Result.: %d\n", intValue);

    return 0;
}

// The output of the program as shown below

/*   

Implicit Conversion: int to float - Result...: 10.000000
Explicit Type Casting: float to int - Result.: 15

*/


