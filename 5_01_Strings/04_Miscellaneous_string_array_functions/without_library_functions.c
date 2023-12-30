#include <stdio.h>
#include <string.h>

#define MAX_SIZE 50

void stringCopy(char dest[], const char src[]);
void stringConcatenate(char dest[], const char src[]);
void stringToUpper(char str[]);
void stringToLower(char str[]);
int stringLength(const char str[]);

void customToUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // Convert lowercase to uppercase by subtracting 32 (ASCII difference)
        }
    }
}

void customToLower(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        // Check if the character is an uppercase letter
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // Convert uppercase to lowercase by adding 32 (ASCII difference)
        }
    }
}

int main() {
    char dest[MAX_SIZE] = "Hello";
    const char src[] = " World!";
    
    // Example of stringCopy
    stringCopy(dest, src);
    printf("strcpy: %s\n", dest); // Output: " World!"
    
    // Example of stringConcatenate
    stringConcatenate(dest, " Welcome!");
    printf("strcat: %s\n", dest); // Output: " World! Welcome!"
    
    // Find string length
    int length = stringLength(dest);
    printf("Length: %d\n", length); // Output: Length of the string
    
    // Convert to uppercase using custom function
    customToUpper(dest);
    printf("Uppercase: %s\n", dest); // Output: Uppercase string
    
    // Convert to lowercase using custom function
    customToLower(dest);
    printf("Lowercase: %s\n", dest); // Output: Lowercase string
    
    return 0;
}

void stringCopy(char dest[], const char src[]) {
    int i;
    for (i = 0; src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Ensure the destination string is null-terminated
}

void stringConcatenate(char dest[], const char src[]) {
    int destLen = strlen(dest);
    int i;
    for (i = 0; src[i] != '\0'; ++i) {
        dest[destLen + i] = src[i];
    }
    dest[destLen + i] = '\0'; // Ensure the destination string is null-terminated
}

int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// The output of the above program is shown below:
/* . 
strcpy:  World!
strcat:  World! Welcome!
Length: 16
Uppercase:  WORLD! WELCOME!
Lowercase:  world! welcome!
*/