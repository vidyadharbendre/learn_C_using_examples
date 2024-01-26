#include <stdio.h>

int main(){

    int var1 = 10;
    int *ptrtoVar1;
    ptrtoVar1 = &var1;

    int arrayRollno[3] = {1, 2, 3};
    int *ptrtoarrayRollno;
    ptrtoarrayRollno = arrayRollno;
    printf("address location : %p\n", ptrtoarrayRollno);

    printf("The size of the integer data type using size of operator : %lu bytes\n", sizeof(var1));
    printf("The address of the declared pointer is - stores the address of the integer data type - %p\n", ptrtoVar1);

    printf("The size of the integer data type using size of operator : %lu bytes\n", sizeof(arrayRollno));
    printf("The address of the declared pointer is - stores the address of the integer data type - %p\n", arrayRollno);

    printf("The size of the integer data type using size of operator : %lu bytes\n", sizeof(arrayRollno[0]));
    printf("The address of the declared pointer is - stores the address of the first integer data type of the first array element- %p\n", &arrayRollno[0]);

    return 0;
}

//The output of the above program is shown as below

/*
address location : 0x16f2a3078
The size of the integer data type using size of operator : 4 bytes
The address of the declared pointer is - stores the address of the integer data type - 0x16f2a3070
The size of the integer data type using size of operator : 12 bytes
The address of the declared pointer is - stores the address of the integer data type - 0x16f2a3078
The size of the integer data type using size of operator : 4 bytes
The address of the declared pointer is - stores the address of the first integer data type of the first array element- 0x16f2a3078
*/