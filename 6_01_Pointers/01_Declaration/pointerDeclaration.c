#include <stdio.h>

int main(){

    int intVar1 = 9;
    int intVar2 = 99;

    float floatVar3 = 11.88;
    float floatVar4 = 12.77;

    int *intpointerVar1;
    int *intpointerVar2;
    float *floatpointerVar3;
    float *floatpointerVar4;


    intpointerVar1 = &intVar1;
    intpointerVar2 = &intVar2;

    floatpointerVar3 = &floatVar3;
    floatpointerVar4 = &floatVar4;


    printf("1. pointer to the integer variable = address of the integer varable.......: %p\n", &intVar1);    
    printf("2. The value of the integer variable......................................: %d\n", intVar1);    
    printf("3. The value of the integer variable......................................: %d\n", *intpointerVar1);    
    printf("4. The value of the float variable using pointer..........................: %f\n", *floatpointerVar3);    
    printf("5. The value of the float variable using float variable...................: %f\n", floatVar4);
    printf("6. The address of the floating type variable or pointer to the floating...: %p\n", &floatVar4);    
    printf("7. The address of the floating type variable or pointer to the floating...: %p\n", floatpointerVar4);  
    printf("8. The value of the float variable using pointer..........................: %f\n", *floatpointerVar4);   
    return 0;
}

// The output of the above program is shown as below:
/*

1. pointer to the integer variable = address of the integer varable.......: 0x16ee82f98
2. The value of the integer variable......................................: 9
3. The value of the integer variable......................................: 9
4. The value of the float variable using pointer..........................: 11.880000
5. The value of the float variable using float variable...................: 12.770000
6. The address of the floating type variable or pointer to the floating...: 0x16ee82f8c
7. The address of the floating type variable or pointer to the floating...: 0x16ee82f8c
8. The value of the float variable using pointer..........................: 12.770000

*/