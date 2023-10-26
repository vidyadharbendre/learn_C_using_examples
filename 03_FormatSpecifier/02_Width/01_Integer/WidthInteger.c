#include <stdio.h>

int main() {
    int integerNumber = 200;
    unsigned int unsignedNumber = 12345;

    printf("Integer with default width...................: %d\n", integerNumber);
    // explicitely specify negative sign to format - left justify
    printf("Integer with left justification..............: %-d\n", integerNumber);    
    printf("Integer with left justification with 10 chars: %-10d\n", integerNumber);    
    
    printf("Integer with width of 10 characters..........: %10d\n", integerNumber);
    // with zero padding
    printf("Integer with zero padding....................: %010d\n", integerNumber);
    // with precision
    printf("Integer with precision.......................: %.10d\n", integerNumber);    

    printf("Unsigned integer with default width..........: %u\n", unsignedNumber);
    printf("Unsigned integer with width of 10 characters.: %10u\n", unsignedNumber);

    return 0;
}
