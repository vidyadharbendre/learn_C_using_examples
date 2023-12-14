#include <stdio.h>

int main(){
    int TargetValue, InitialValue;
    int *p;

    InitialValue = 10;
    p = &InitialValue;
    TargetValue = *p;

    printf("Initial Value assigned %d\n", InitialValue);
    printf("Target Value assigned %d\n", TargetValue);

    printf("Pointer Value assigned %p\n", p);
    printf("Size of the pointer variable %lu\n", sizeof(p));

}