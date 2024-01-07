#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char dest[50] = ""; // Initialize dest as an empty string

    printf("Source string 1: %s\n", str1);
    printf("Source string 2: %s\n", str2);

    // Appending str1 and the first 8 characters of str2 to dest
    strcpy(dest, str1);
    strncat(dest, str2, 3); // Append the first 8 characters of str2 to dest
    printf("Appended string: %s\n", dest);

    return 0;
}

// The output of the above program is shown as below:
/*
Source string 1: Hello
Source string 2: World
Appended string: HelloWor
*/