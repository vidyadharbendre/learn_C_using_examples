/*

Author  :   Vidyadhar Bendre

Email   :   vidyadhar.bendre@gmail.com   

Purpose : 
    This program demonstrates the use of format specifiers to control the precision of floating-point numbers.
    It prints both float and double values with default precision and with a specified precision.
*/

#include <stdio.h>

int main() {
    float floatingNumber = 3.14159;
    double doubleNumber = 12345.6789;

    printf("1 - Floating-point with default precision...: %f\n", floatingNumber);
    printf("2 - Floating-point with precision of 2......: %.2f\n", floatingNumber);
    
    printf("3 - Double with default precision...........: %lf\n", doubleNumber);
    printf("4 - Double with precision of 3..............: %.3lf\n", doubleNumber);
    
    return 0;
}


// The output of the program as shown below

/*  

1 - Floating-point with default precision...: 3.141590
2 - Floating-point with precision of 2......: 3.14
3 - Double with default precision...........: 12345.678900
4 - Double with precision of 3..............: 12345.679

*/