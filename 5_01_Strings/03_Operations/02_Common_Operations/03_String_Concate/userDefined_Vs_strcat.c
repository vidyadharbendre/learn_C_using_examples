#include <stdio.h>
#include <string.h>

void user_defined_strcat(char dest[], char src[]);

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char dest_strcat[20];
    char dest_user_defined[20];

    // Using strcat from string.h
    strcpy(dest_strcat, str1);
    strcat(dest_strcat, str2);

    printf("String 1......................................: %s\n", str1);
    printf("String 2......................................: %s\n", str2);
    printf("Destination string (using strcat)............: %s\n", dest_strcat);

    // Using the user-defined strcat function
    strcpy(dest_user_defined, str1);
    user_defined_strcat(dest_user_defined, str2);
    printf("Destination string (using user-defined function): %s\n", dest_user_defined);

    return 0;
}
// User-defined strcat function without pointers
void user_defined_strcat(char dest[], char src[]) {
    size_t dest_len = strlen(dest);
    size_t i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; // Null-terminate the concatenated string
}

/*
String 1......................................: Hello, 
String 2......................................: world!
Destination string (using strcat)............: Hello, world!
Destination string (using user-defined function): Hello, world!
*/