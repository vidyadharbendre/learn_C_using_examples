#include <stdio.h>

int main() {
    struct StudentRecord {
        int roll_no;
        float marks;
    };

    struct StudentRecord s[5];

    struct StudentRecord *ptrtostruct;  // pointer declaration

    ptrtostruct = &s[0];  // Point to the first element of the array
    // The pointer ptrtostruct is assigned the address of the first element of the array s.
    printf("The size of the StudentRecord: %lu\n", sizeof(s[0]));
    printf("The size of the StudentRecord array: %lu\n", sizeof(s));

    printf("The address of the StudentRecord 1: %p\n", (void *)ptrtostruct);  // pointer typecast
    // The memory address of the first element of the array s (where ptrtostruct is pointing) is printed. The (void *) is a typecast to avoid compiler warnings.

    return 0;
}
