/*

    Program Name: LengthModifierL.c
    Author: Vidyadhar Bendre
    Email: vidyadhar.bendre@gmail.com
    Description: In this example, we use the L length modifier with the %Lf format specifier to print a long double value, which represents the mathematical constant π (pi).

*/

#include <stdio.h>

int main() {
    long double pi = 3.14159265358979323846;

    // Using %Lf with L length modifier to print a long double
    printf("A long double with %%Lf: %Lf\n", pi);

    return 0;
}
