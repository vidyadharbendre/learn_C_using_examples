#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1;
    int **ptr2;

    ptr1 = (int *)malloc(sizeof(int));
    *ptr1 = 42;

    ptr2 = &ptr1;

    printf("Value using double pointer: %d\n", **ptr2);

    free(ptr1);

    return 0;
}

// The output of the above program is shown as below
/*
Value using double pointer: 42
*/