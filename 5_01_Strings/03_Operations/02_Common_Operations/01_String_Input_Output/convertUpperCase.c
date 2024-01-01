#include <stdio.h>

void convertToUpperCase(char str[]);

int main() {
    char str[] = "Hello, World!";
    int i = 0;

    printf("Original string: %s\n", str);

    convertToUpperCase(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}

void convertToUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase letters to uppercase by subtracting 32 from their ASCII values
        }
        i++;
    }
}

// The output of the above program is shown below:
/* . 
Original string: Hello, World!
Uppercase string: HELLO, WORLD!
*/