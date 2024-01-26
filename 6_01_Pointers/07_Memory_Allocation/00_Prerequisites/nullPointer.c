#include <stdio.h>

int main() {
    int *ptr = NULL;  // Initializing a pointer to null

    if (ptr == NULL) {
        printf("Pointer is a null pointer.\n");
    } else {
        printf("Pointer is not null.\n");
    }

    return 0;
}
