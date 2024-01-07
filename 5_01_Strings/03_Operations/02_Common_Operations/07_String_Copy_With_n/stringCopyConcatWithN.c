#include <stdio.h>
#include <string.h>

void truncated_strncpy(char dest[], const char src[], int n);

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char dest_copy[50] = ""; // Initialize dest_copy as an empty string

    printf("Source string 2: %s\n", str2);

    int truncation_length = 3; // Limit by 3 characters
    truncated_strncpy(dest_copy, str2, truncation_length);
    dest_copy[sizeof(dest_copy) - 1] = '\0'; // Ensure null-termination
    printf("Copied string: %s\n", dest_copy);

    return 0;
}

// Custom string copy function with truncation
void truncated_strncpy(char dest[], const char src[], int n) {
    strncpy(dest, src, n);
}

//The output of the above program is shown as below:
/*
Source string 2: World
Copied string: Wor

[Done] exited with code=0 in 0.323 seconds
*/