#include <stdio.h>

int main(){

    printf("Size of the short integer.......: %lu in bytes\n", sizeof(short int));
    printf("Size of the unsigned integer....: %lu in bytes\n", sizeof(unsigned int));
    printf("Size of the signed integer......: %lu in bytes\n", sizeof(signed int));
    printf("Size of the integer.............: %lu in bytes\n", sizeof(int));
    printf("Size of the long integer........: %lu in bytes\n", sizeof(long));
    printf("Size of the long long integer...: %lu in bytes\n", sizeof(long long));

    printf("Size of the float...............: %lu in bytes\n", sizeof(float)); 
    printf("Size of the double..............: %lu in bytes\n", sizeof(double));
    printf("Size of the long double.........: %lu in bytes\n", sizeof(long double));

    printf("Size of the char................: %lu in bytes\n", sizeof(char));
    printf("Size of the unsigned char.......: %lu in bytes\n", sizeof(unsigned char));
    printf("Size of the signed char.........: %lu in bytes\n", sizeof(signed char));

    return 0;
}


// The output of the above program is shown as below:
/*

Size of the short integer.......: 2 in bytes
Size of the unsigned integer....: 4 in bytes
Size of the signed integer......: 4 in bytes
Size of the integer.............: 4 in bytes
Size of the long integer........: 8 in bytes
Size of the long long integer...: 8 in bytes
Size of the float...............: 4 in bytes
Size of the double..............: 8 in bytes
Size of the long double.........: 8 in bytes
Size of the char................: 1 in bytes
Size of the unsigned char.......: 1 in bytes
Size of the signed char.........: 1 in bytes

*/
