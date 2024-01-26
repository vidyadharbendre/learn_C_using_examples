#include <stdio.h>

int main() {
    // Declare an integer variable
    int intValue = 42;

    // Declare an int pointer
    int *ptr1;

    // Assign the address of the integer variable to the int pointer
    ptr1 = &intValue;

    // Typecast and dereference the int pointer to access the integer value
    printf("Integer Value: %d\n", *ptr1);

    // Print the size of the integer in bytes
    printf("Size of the integer is %lu bytes\n", sizeof(int));

    // Print the address and value stored in the int pointer
    printf("Address = %p, Value = %d\n", ptr1, *ptr1);

    // Declare a void pointer and assign the address of the int pointer to it
    void *ptrtovoid;
    ptrtovoid = ptr1;

    // Print the address stored in the void pointer
    printf("Address: %p\n", ptrtovoid);

    // Print the address stored in the int pointer
    printf("Address: %p\n", ptr1);

    return 0;
}


// The output of the above code is shown as below
/*

Integer Value: 42
Size of the integer is 4 bytes
Address = 0x16bd7b0a8, Value = 42
Address: 0x16bd7b0a8
Address: 0x16bd7b0a8

*/

/*

Explanation:

Declaration and Initialization:

An integer variable intValue is declared and assigned the value 42.
An integer pointer ptr1 is declared.
Assigning Address to Pointer:

The address of intValue is assigned to ptr1.
Dereferencing and Printing:

The value stored at the address pointed by ptr1 is printed.
Size of Integer:

The size of the integer variable is printed using sizeof(int).
Printing Address and Value:

The address and value stored in the integer pointer ptr1 are printed.
Void Pointer:

A void pointer ptrtovoid is declared and assigned the address of the integer pointer ptr1.
Printing Void Pointer and Integer Pointer Addresses:

The addresses stored in the void pointer and the integer pointer are printed.
Output:

The output shows the integer value, size, address, and value. Additionally, it displays the address stored in both the void pointer and the integer pointer.
*/