#include <stdio.h>

int main() {
    int integerNumber = 42;
    printf("Integer with default width: %d\n", integerNumber);
    printf("Integer with width of 8 characters: %8d\n", integerNumber);
    
    unsigned int unsignedNumber = 12345;
    printf("Unsigned integer with default width: %u\n", unsignedNumber);
    printf("Unsigned integer with width of 10 characters: %10u\n", unsignedNumber);
    
    return 0;
}
