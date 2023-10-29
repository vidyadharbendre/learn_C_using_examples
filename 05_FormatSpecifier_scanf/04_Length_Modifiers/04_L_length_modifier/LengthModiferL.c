/* 
    Author          : Vidyadhar Bendre
    Email           : vidyadhar.bendre@gmail.com
    Description     : This program demonstrates the use of the L length modifier with the %Lf format specifier to print a long double value, particularly representing the mathematical constant π (pi).

    In this program:
    1. We declare a double variable 'temperatureDouble' with the default data type of 'double'.
    2. We also declare 'long double' variables 'pi' and 'myLongDouble' to store values with extended precision.

    The primary purpose of this program is to illustrate the usage of the 'L' length modifier in combination with the %Lf format specifier to display a long double value. We specifically use it to print the mathematical constant π (pi) with greater precision.

    The program showcases the printing of 'temperatureDouble' with both default and two decimal places precision, demonstrating how precision formatting affects the output. It also emphasizes the correct usage of the 'L' length modifier for long double values.

    The program concludes by displaying the values of 'pi' and 'myLongDouble' using the %Lf format specifier with the L length modifier.

    Overall, this program serves as an informative example of working with extended precision long double values and the associated format specifiers.
*/

#include <stdio.h>

int main() {
    // Declare a double variable (default to double)
    double temperatureDouble = 25.5;
    long double pi = 3.14159265358979323846;
    long double myLongDouble = 3.14159265359L;

    // Display the value of temperatureDouble with default and 2 decimal places precision
    printf("Double variable without 'f' suffix (default precision)..........:%lf\n", temperatureDouble);
    printf("Double variable without 'f' suffix (2 decimal places precision).:%.2lf\n", temperatureDouble);

    // Using %Lf with L length modifier to print a long double
    printf("A long double with %%Lf..........................................:%Lf\n", pi);

    // myLongDouble
    printf("my long double variable with suffix L...........................:%LF\n", myLongDouble);

    return 0;
}

// The output of the above program as shown below

/* .    

Double variable without 'f' suffix (default precision)..........:25.500000
Double variable without 'f' suffix (2 decimal places precision).:25.50
A long double with %Lf..........................................:3.141593
my long double variable with suffix L...........................:3.141593

*/










