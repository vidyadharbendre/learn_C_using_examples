#include <stdio.h>

int main() {
    char str[50];
    int i = 0;
    char ch;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n' && i < sizeof(str) - 1) {
        str[i++] = ch;
    }

    str[i] = '\0'; // Terminate the string

    printf("String read using getchar in a loop: %s\n", str);

    return 0;
}
