/*

    Author  : Vidyadhar Bendre

    Email   : vidyadhar.bendre@gmail.com

    Purpose:
        This C program showcases the formatting options for floating-point numbers using printf. It demonstrates formatting options for both float and double data types, including zero padding, width control, and precision.

    Description:
        1. Displaying a floating-point number with the default width.
        2. Displaying a floating-point number with zero padding and a width of 12 characters.
        3. Displaying a floating-point number with a width of 12 characters.
        4. Displaying a double with the default width.
        5. Displaying a double with a width of 12 characters.
        6. Displaying a floating-point number with precision set to 12 decimal places.

*/

#include <stdio.h>

int main() {
    float floatingNumber = 3.1415;
    double doubleNumber = 12345.67890123456789;

    printf("1 - Floating-point with default width..........:%f\n", floatingNumber);
    printf("2 - Floating with zero padding.................:%012f\n", floatingNumber);
    printf("3 - Floating-point with width of 12 characters.:%12f\n", floatingNumber);
    printf("4 - Double with default width..................:%lf\n", doubleNumber);
    printf("5 - Double with width of 12 characters.........:%12lf\n", doubleNumber);
    printf("6 - Floating with precision....................:%.12f\n", floatingNumber);  

    return 0;
}

// The output of the above program as follows

/*

1 - Floating-point with default width..........:3.141500
2 - Floating with zero padding.................:00003.141500
3 - Floating-point with width of 12 characters.:    3.141500
4 - Double with default width..................:12345.678901
5 - Double with width of 12 characters.........:12345.678901
6 - Floating with precision....................:3.141499996185

*/
