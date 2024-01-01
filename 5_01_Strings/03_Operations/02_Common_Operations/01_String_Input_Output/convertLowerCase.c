#include <stdio.h>

void convertToLowerCase(char str[]);

int main() {
    char str[] = "Hello, World!";
    int i = 0;

    printf("Original string: %s\n", str);

    convertToLowerCase(str);

    printf("Lowercase string: %s\n", str);

    return 0;
}

void convertToLowerCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert uppercase letters to lowercase by adding 32 to their ASCII values
        }
        i++;
    }
}

// The output of the above program is shown below
/* . 
Original string: Hello, World!
Lowercase string: hello, world!
*/