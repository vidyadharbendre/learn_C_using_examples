#include <stdio.h>
#include <string.h>

void trimWhitespace(char str[]);

int main() {
    char myString[] = "                        Hello, World!   ";

    printf("Given UnTrimmed :%s\n", myString);
    // Trim whitespace
    trimWhitespace(myString);
    printf("Trimmed.........: \"%s\"\n", myString); // Output: "Hello, World!"

    return 0;
}

void trimWhitespace(char str[]) {
    int length = strlen(str);
    int start = 0, end = length - 1;

    // Trim leading whitespace
    while (str[start] == ' ' || str[start] == '\t' || str[start] == '\n') {
        start++;
    }

    // Trim trailing whitespace
    while (end >= start && (str[end] == ' ' || str[end] == '\t' || str[end] == '\n')) {
        end--;
    }

    // Shift characters to the beginning of the string
    for (int i = 0; i <= end - start; i++) {
        str[i] = str[start + i];
    }

    // Null-terminate the trimmed string
    str[end - start + 1] = '\0';
}


// The outout of the above program is shown as below:
/* . 
Given UnTrimmed :                        Hello, World!   
Trimmed.........: "Hello, World!"
*/