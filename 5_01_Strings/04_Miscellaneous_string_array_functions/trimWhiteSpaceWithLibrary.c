#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trimWhitespace(char str[]);

int main() {
    char myString[] = "  Hello, World!   ";

    printf("Given String with white space : %s\n", myString);
    // Trim whitespace
    trimWhitespace(myString);
    printf("Trimmed.......................: \"%s\"\n", myString); // Output: "Hello, World!"

    return 0;
}

void trimWhitespace(char str[]) {
    int start = 0, end = strlen(str) - 1;

    // Trim leading whitespace
    while (isspace(str[start])) {
        start++;
    }

    // Trim trailing whitespace
    while (end > start && isspace(str[end])) {
        end--;
    }

    // Shift characters to the beginning of the string
    for (int i = 0; i <= end - start; i++) {
        str[i] = str[start + i];
    }

    // Null-terminate the trimmed string
    str[end - start + 1] = '\0';
}

// The output of the above program is shown as below:
/* . 
Given String with white space :   Hello, World!   
Trimmed.......................: "Hello, World!"

*/