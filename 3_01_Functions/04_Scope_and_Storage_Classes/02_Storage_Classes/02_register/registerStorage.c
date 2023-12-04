/*  
Author   : Vidyadhar Bendre
Date     : 4th December, 2023
Email    : vidyadhar.bendre@gmail.com

Purpose  : Illustrating Register Variables in C

Description:
The register storage class in C suggests to the compiler that a particular local variable should be stored in a CPU register for faster access. However, modern compilers often optimize code independently, and they may choose to ignore the register keyword when allocating variables to registers.

Explanation:
In this code, the regStrfun() function demonstrates the use of a register variable. The register int fx variable is declared as a register variable inside the function.

As 'fx' is declared as a register variable, it's suggested to the compiler to store it in a CPU register for faster access. However, the scope of 'fx' is limited to the regStrfun() function. Once the function completes its execution, 'fx' goes out of scope and is no longer accessible.

Please note that the actual use of the register keyword might not always force a variable into a register as compilers optimize code based on their algorithms and hardware architecture. This example simply highlights the concept of register variables in C.
*/

#include <stdio.h>

void regStrfun();

int main() {
    regStrfun();
    // 'fx' is not accessible here as its scope is limited to the function it's declared in
    return 0;
}

void regStrfun() {
    register int fx = 5; // Declare 'fx' as a register variable
    printf("Value of fx inside function: %d\n", fx);
}

//The output of the above program is shown below;
/* 

Value of fx inside function: 5

*/
