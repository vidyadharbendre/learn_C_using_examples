#include <stdio.h>

int main() {
    float floatingNumber = 3.14159;
    printf("Floating-point with default precision: %f\n", floatingNumber);
    printf("Floating-point with precision of 2: %.2f\n", floatingNumber);
    
    double doubleNumber = 12345.6789;
    printf("Double with default precision: %lf\n", doubleNumber);
    printf("Double with precision of 3: %.3lf\n", doubleNumber);
    
    return 0;
}
