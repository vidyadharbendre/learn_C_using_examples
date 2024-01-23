#include <stdio.h>

int main() {
    int num = 42;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    printf("1. Accessing with Double Pointer - Value of num...: %d\n", **ptr2);
    printf("2. Accessing with Single Pointer - Value of num...: %d\n", *ptr1);
    printf("3. Accessing variable directly....................: %d\n", num);

    return 0;
}

// The output of the above program is shown as below:
/*
1. Accessing with Double Pointer - Value of num...: 42
2. Accessing with Single Pointer - Value of num...: 42
3. Accessing variable directly....................: 42
*/