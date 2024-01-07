#include <stdio.h>
#include <string.h>

void user_defined_strcpy(char dest[], char src[]);

int main() {
    char source[] = "Hello, world!";
    char destination[20];

    // Using strcpy from string.h
    strcpy(destination, source);

    printf("Source string......................................: %s\n", source);
    printf("Destination string (using strcpy)..................: %s\n", destination);

    // Using the user-defined string copy function
    char destination_user_defined[20];
    user_defined_strcpy(destination_user_defined, source);

    printf("Destination string (using user-defined function)...: %s\n", destination_user_defined);

    return 0;
}

// User-defined string copy function without pointers
void user_defined_strcpy(char dest[], char src[]) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0') {
        i++;
    }
}

// The output of the above program is shown as below:
/*
Source string......................................: Hello, world!
Destination string (using strcpy)..................: Hello, world!
Destination string (using user-defined function)...: Hello, world!
*/