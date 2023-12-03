#include <stdio.h>

extern int count; // Declare 'count' as an external variable

int main() {
// 'count' from file1.c is accessed here
    printf("Value of count from extStrFile_2.c: %d\n", count);
    return 0;
}

// The output of the above program is 

/*  
Value of count from file2.c: 5
*/