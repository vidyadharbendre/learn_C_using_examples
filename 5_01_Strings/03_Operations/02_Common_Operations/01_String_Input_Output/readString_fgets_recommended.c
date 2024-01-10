#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum string length is 100 characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String entered using fgets: %s\n", str);

    return 0;
}
