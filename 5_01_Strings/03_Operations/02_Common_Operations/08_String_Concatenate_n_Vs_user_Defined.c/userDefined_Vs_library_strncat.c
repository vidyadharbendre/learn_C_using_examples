#include <stdio.h>
#include <string.h>

// User-defined strncat function without pointers
void user_defined_strncat(char dest[], const char src[], size_t n) {
    size_t dest_len = strlen(dest);
    size_t i = 0;
    while (src[i] != '\0' && i < n) {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; // Null-terminate the concatenated string
}

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char dest_strncat[20];
    char dest_user_defined[20];

    // Using strncat from string.h
    strcpy(dest_strncat, str1);
    strncat(dest_strncat, str2, 3); // Concatenate only the first 3 characters of str2

    printf("String 1......................................: %s\n", str1);
    printf("String 2......................................: %s\n", str2);
    printf("Destination string (using strncat)............: %s\n", dest_strncat);

    // Using the user-defined strncat function
    strcpy(dest_user_defined, str1);
    user_defined_strncat(dest_user_defined, str2, 3); // Concatenate only the first 3 characters of str2

    printf("Destination string (using user-defined function): %s\n", dest_user_defined);

    return 0;
}
