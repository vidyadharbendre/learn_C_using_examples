#include <stdio.h>

int main() {
    int value = 10;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;

    // Print the value using ptr1
    printf("Value using ptr1............: %d\n", *ptr1);

    // Print the value using ptr2
    printf("Value using ptr2............: %d\n", **ptr2);

    // Modify the value using ptr1
    *ptr1 = 20;

    // Print the modified value using ptr2
    printf("Modified value using ptr2...: %d\n", **ptr2);

    return 0;
}


// The output of the above program is shown as below:
/*
Value using ptr1............: 10
Value using ptr2............: 10
Modified value using ptr2...: 20
*/