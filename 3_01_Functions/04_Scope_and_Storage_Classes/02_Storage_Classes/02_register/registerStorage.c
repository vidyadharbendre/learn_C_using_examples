#include <stdio.h>

void regStrfun();

int main() {
    regStrfun();
    // 'x' is not accessible here as its scope is limited to the function it's declared in
    return 0;
}

void regStrfun() {
    register int fx = 5; // Declare 'x' as a register variable
    printf("Value of x inside function: %d\n", fx);
}

//The output of the above program is shown as below;
/* 

Value of x inside function: 5

*/