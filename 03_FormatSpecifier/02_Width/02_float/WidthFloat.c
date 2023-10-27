#include <stdio.h>

int main() {
    float floatingNumber = 3.1415;
    double doubleNumber = 12345.67890123456789;
    
    printf("1 - Floating-point with default width.........: %f\n", floatingNumber);
    // with zero padding
    printf("2 - Floating with zero padding................: %012f\n", floatingNumber);

    printf("3 - Floating-point with width of 12 characters: %12f\n", floatingNumber);
    
    
    printf("4 - Double with default width.................: %lf\n", doubleNumber);
    printf("5 - Double with width of 12 characters........: %12lf\n", doubleNumber);

    // with precision
    printf("6 - Floating with precision....................: %.12f\n", floatingNumber);  

    return 0;
}

// The output of the above program as follows

/*

1 - Floating-point with default width.........: 3.141500
2 - Floating with zero padding................: 00003.141500
3 - Floating-point with width of 12 characters:     3.141500
4 - Double with default width.................: 12345.678901
5 - Double with width of 12 characters........: 12345.678901
6 - Floating with precision....................: 3.141499996185

*/