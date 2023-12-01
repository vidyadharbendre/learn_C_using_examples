#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <limits.h>

int main() {
    // declaration
    int variable, *pointer;

    // assignment
    variable = 99;
    pointer = &variable; // stores the address of the variable

    // accessing and displaying the value and address of the variable
    printf("The value of the variable...........................: %d\n", variable);
    printf("Access the value using pointers.....................: %d\n", *pointer);
    printf("The address of the variable in hexa-decimal.........: %p\n", &variable);
    printf("The address of the variable in decimal..............: %lu\n", (unsigned long)&variable);

    // accessing the value using pointers
    printf("Access the value using pointers.....................: %d\n", *pointer);
    printf("The value of the variable...........................: %d\n", variable);
    printf("The address stored in the pointer in hexa-decimal...: %p\n", pointer);
    printf("The address stored in the pointer in decimal........: %lu\n", (unsigned long)pointer);

    // displaying the size of the pointer and integer variables
    printf("The size of the pointer variable in bytes...........: %zu\n", sizeof(pointer));

    printf("The size of the integer in bytes....................: %lu\n", sizeof(variable));

    // displaying the maximum and minimum sizes of a pointer and integer
    printf("Maximum size of a pointer...........................: %zu\n", sizeof(ptrdiff_t));
    printf("Minimum size of a pointer...........................: %zu\n", sizeof(ptrdiff_t));

    printf("Maximum size of an integer..........................: %d\n", INT_MAX);
    printf("Minimum size of an integer..........................: %d\n", INT_MIN);

    return 0;
}

// The output of the above program is shown below
/* . 

The value of the variable...........................: 99
Access the value using pointers.....................: 99
The address of the variable in hexa-decimal.........: 0x16b0e6458
The address of the variable in decimal..............: 6091072600
Access the value using pointers.....................: 99
The value of the variable...........................: 99
The address stored in the pointer in hexa-decimal...: 0x16b0e6458
The address stored in the pointer in decimal........: 6091072600
The size of the pointer variable in bytes...........: 8
The size of the integer in bytes....................: 4
Maximum size of a pointer...........................: 8
Minimum size of a pointer...........................: 8
Maximum size of an integer..........................: 2147483647
Minimum size of an integer..........................: -2147483648

*/