#include <stdio.h>
#include <string.h>

size_t user_defined_strlen(char str[]);

int main() {
    char str[] = "Hello, world!";

    // Get the length of the string using the user-defined function
    size_t user_defined_length = user_defined_strlen(str);

    // Get the length of the string using the strlen function from string.h
    size_t strlen_length = strlen(str);

    printf("User-defined strlen: %zu\n", user_defined_length);
    printf("String.h strlen: %zu\n", strlen_length);

    return 0;
}

// User-defined strlen function
size_t user_defined_strlen(char str[]) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// The output of the above program is shown as below:
/*
User-defined strlen: 13
String.h strlen: 13
*/