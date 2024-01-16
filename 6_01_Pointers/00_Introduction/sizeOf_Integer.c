/*
0x: This prefix indicates that the following digits are in hexadecimal (base-16) format. 
In C, when using %p in the printf function to print addresses, the address is typically displayed in hexadecimal.

16b842fa8: This is the actual value of the memory address. 
In hexadecimal, each digit represents four bits, so two hexadecimal digits represent one byte. 
In your example, the address is 16b842fa8, and if you convert this to binary, it would be a 32-bit binary number (4 bytes).

So, the address 0x16b842fa8 refers to the specific location in the computer's memory where the variable intVar is stored.

To convert the hexadecimal value 16b842fa8 into binary, you can convert each hexadecimal digit into its binary equivalent.
Here's the breakdown:

1 in binary is 0001
6 in binary is 0110
b in binary is 1011
8 in binary is 1000
4 in binary is 0100
2 in binary is 0010
f in binary is 1111
a in binary is 1010
8 in binary is 1000

So, the binary representation of 16b842fa8 is 0001 0110 1011 1000 0100 0010 1111 1010 1000. 
This binary value represents the memory address 0x16b842fa8 in binary form.

Each group of four binary digits corresponds to one hexadecimal digit, and each hexadecimal digit corresponds to four bits. Therefore, the complete binary representation is 32 bits (4 bytes), as expected for a memory address in a 32-bit system.

*/


#include <stdio.h>

void printBinary(unsigned long n);

int main() {
    int intVar = 8;
    int *pointerToInt = &intVar;

    printf("Size of int: %lu bytes\n", sizeof(intVar));
    printf("Address location of int: %p bytes\n", (void *)&intVar);
    printf("The value of the integer variable is: %d\n", *pointerToInt);

    printf("Binary representation of the address: ");
    printBinary((unsigned long)&intVar);
    printf("\n");

    return 0;
}

void printBinary(unsigned long n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binary[64];  // Assuming a 64-bit system
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

// The output of the above program is shown as below
/*
Size of int: 4 bytes
Address location of int: 0x16fb2afa8 bytes
The value of the integer variable is: 8
Binary representation of the address: 101101111101100101010111110101000
*/