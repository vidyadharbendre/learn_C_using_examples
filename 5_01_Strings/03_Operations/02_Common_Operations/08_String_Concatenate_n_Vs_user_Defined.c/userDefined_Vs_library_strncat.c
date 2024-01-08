#include <stdio.h>
#include <string.h>

void user_defined_strncat(char fdest[], char fsrc[], size_t fn);

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
// User-defined strncat function without pointers
void user_defined_strncat(char fdest[], char fsrc[], size_t fn) {
    size_t fdest_len = strlen(fdest);
    size_t fi = 0;
    while (fsrc[fi] != '\0' && fi < fn) {
        fdest[fdest_len + fi] = fsrc[fi];
        fi++;
    }
    fdest[fdest_len + fi] = '\0'; // Null-terminate the concatenated string
}

// The output of the above program is shown as below
/*
String 1......................................: Hello, 
String 2......................................: world!
Destination string (using strncat)............: Hello, wor
Destination string (using user-defined function): Hello, wor
*/