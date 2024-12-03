#include <stdio.h>

extern int sharedVar; // Declaration of program-scope variable.

int main() {
    printf("Program-scope variable: %d\n", sharedVar);
    return 0;
}
