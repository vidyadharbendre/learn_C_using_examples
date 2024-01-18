#include <stdio.h>

int main(){
    int TargetValue, InitialValue;
    int *p;

    InitialValue = 10;
    p = &InitialValue;
    TargetValue = *p;

    printf("Initial Value assigned....................: %d\n", InitialValue);
    printf("Target Value assigned.....................: %d\n", TargetValue);

    printf("Pointer Value assigned....................: %p\n", p);
    printf("Size of the pointer variable..............: %lu\n", sizeof(p));
    printf("Size of the datatype - Integer variable...: %lu\n", sizeof(InitialValue));

}
// The output of the above program is shown as below
/*

Initial Value assigned....................: 10
Target Value assigned.....................: 10
Pointer Value assigned....................: 0x16b01ef38
Size of the pointer variable..............: 8
Size of the datatype - Integer variable...: 4

*/
