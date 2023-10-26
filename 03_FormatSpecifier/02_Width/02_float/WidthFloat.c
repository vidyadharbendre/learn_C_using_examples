#include <stdio.h>

int main() {
    float floatingNumber = 3.14159;
    printf("Floating-point with default width: %f\n", floatingNumber);
    printf("Floating-point with width of 10 characters: %10f\n", floatingNumber);
    
    double doubleNumber = 12345.6789;
    printf("Double with default width: %lf\n", doubleNumber);
    printf("Double with width of 12 characters: %12lf\n", doubleNumber);
    
    return 0;
}
