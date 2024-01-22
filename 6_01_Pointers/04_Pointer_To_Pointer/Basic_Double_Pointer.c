#include <stdio.h>

int main() {
    int num = 42;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    printf("Value of num: %d\n", **ptr2);

    return 0;
}