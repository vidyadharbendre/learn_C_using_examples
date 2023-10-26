#include <stdio.h>

int main() {
    int integerNumber = 200;
    printf("Integer with default precision: %d\n", integerNumber);
    printf("Integer with precision of 5: %.5d\n", integerNumber);
    
    unsigned int unsignedNumber = 12345;
    printf("Unsigned integer with default precision: %u\n", unsignedNumber);
    printf("Unsigned integer with precision of 8: %.8u\n", unsignedNumber);
    
    return 0;
}
