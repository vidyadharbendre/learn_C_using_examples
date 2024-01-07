#include <stdio.h>
#include <string.h>

void user_defined_strncpy(char dest[], char src[], size_t n);

int main() {
    char source[] = "Hello, world!";
    char destination_strncpy[20];
    char destination_user_defined[20];

    // Using strncpy from string.h
    strncpy(destination_strncpy, source, 9); // Copy only three characters
    destination_strncpy[9] = '\0'; // Null-terminate manually

    printf("Source string......................................: %s\n", source);
    printf("Destination string (using strncpy)..................: %s\n", destination_strncpy);

    // Using the user-defined strncpy function
    user_defined_strncpy(destination_user_defined, source, 9); // Copy only three characters

    printf("Destination string (using user-defined function)...: %s\n", destination_user_defined);

    return 0;
}

// User-defined strncpy function without pointers
void user_defined_strncpy(char dest[], char src[], size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Null-terminate the copied string
}

// The output of the above program is shown as below:
/*
Source string......................................: Hello, world!
Destination string (using strncpy)..................: Hello, wo
Destination string (using user-defined function)...: Hello, wo
*/
