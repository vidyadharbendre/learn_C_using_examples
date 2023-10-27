#include <stdio.h>

int main() {
    int integerNumber = 200;
    unsigned int unsignedNumber = 12345;

    printf("1 - Displaying Integer with default width........: %d\n", integerNumber);
    // explicitely specify negative sign to format - left justify
    printf("2 - Integer with left justification - <-flags>...: %-d\n", integerNumber);    
    printf("3 - left justification <-flag>plus width 10......: %-10d\n", integerNumber);    
    
    printf("4 - Integer with width of 10 characters..........: %10d\n", integerNumber);
    // with zero padding
    printf("5 - Integer with zero padding....................: %010d\n", integerNumber);
    // with precision
    printf("6 - Integer with precision.......................: %.10d\n", integerNumber);    

    printf("7 - Unsigned integer with default width..........: %u\n", unsignedNumber);
    printf("8 - Unsigned integer with width of 10 characters.: %10u\n", unsignedNumber);

    return 0;
}

// The output of the above program as follows

/*

1 - Displaying Integer with default width........: 200
2 - Integer with left justification - <-flags>...: 200
3 - left justification <-flag>plus width 10......: 200       
4 - Integer with width of 10 characters..........:        200
5 - Integer with zero padding....................: 0000000200
6 - Integer with precision.......................: 0000000200
7 - Unsigned integer with default width..........: 12345
8 - Unsigned integer with width of 10 characters.:      12345

*/