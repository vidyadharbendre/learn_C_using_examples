#include <stdio.h>

int main(){

    float floatVar = 10.5;
    float *ptrtoVar;
    ptrtoVar = &floatVar;

    float arrayMarks[3] = {11.4, 20.5, 30.5};
    float *ptrtoarrayMarks;
    ptrtoarrayMarks = arrayMarks;
    printf("address location : %p\n", ptrtoarrayMarks);

    printf("The size of the integer data type using size of operator : %lu bytes\n", sizeof(floatVar));
    printf("The address of the declared pointer is - stores the address of the integer data type - %p\n", ptrtoVar);

    printf("The size of the integer data type using size of operator : %lu bytes\n", sizeof(arrayMarks));
    printf("The address of the declared pointer is - stores the address of the integer data type - %p\n", arrayMarks);

    printf("The size of the integer data type using size of operator : %lu bytes\n", sizeof(arrayMarks[0]));
    printf("The address of the declared pointer is - stores the address of the first integer data type of the first array element- %p\n", &arrayMarks[0]);

    return 0;
}

//The output of the above program is shown as below

/*
address location : 0x16b2f7078
The size of the integer data type using size of operator : 4 bytes
The address of the declared pointer is - stores the address of the integer data type - 0x16b2f7070
The size of the integer data type using size of operator : 12 bytes
The address of the declared pointer is - stores the address of the integer data type - 0x16b2f7078
The size of the integer data type using size of operator : 4 bytes
The address of the declared pointer is - stores the address of the first integer data type of the first array element- 0x16b2f7078
*/