#include <stdio.h>
#include <string.h>

void user_defined_strcat(char dest[], const char src[]);

int main() {
    char str1[100], str2[100];
    char dest_strcat[200];
    char dest_user_defined[200];

    // Reading the source string
    printf("Enter the source string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character if present

    // Reading the destination string
    printf("Enter the destination string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character if present

    // Using strcat from string.h
    strcpy(dest_strcat, str1);
    strcat(dest_strcat, str2);

    printf("%lu %s\n", strlen(dest_strcat), dest_strcat);

    // Remove the newline character from dest_strcat if present
    dest_strcat[strcspn(dest_strcat, "\n")] = '\0';

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Destination string (using strcat): %s\n", dest_strcat);

    // Using the user-defined strcat function
    strcpy(dest_user_defined, str1);
    user_defined_strcat(dest_user_defined, str2);
    printf("Destination string (using user-defined function): %s\n", dest_user_defined);

    return 0;
}

// User-defined strcat function without pointers
void user_defined_strcat(char dest[], const char src[]) {
    int dest_len = strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; // Null-terminate the concatenated string
}
// The output of the above program is shown as below
/*
Enter the source string: Learn C
Enter the destination string: using Examples!
22 Learn Cusing Examples!
String 1: Learn C
String 2: using Examples!
Destination string (using strcat): Learn Cusing Examples!
Destination string (using user-defined function): Learn Cusing Examples!
*/