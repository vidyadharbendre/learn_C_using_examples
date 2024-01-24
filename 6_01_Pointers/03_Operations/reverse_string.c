#include <stdio.h>
#include <string.h>

void printReverse(const char *str);

int main() {
    // Input a string
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character at the end
    strtok(inputString, "\n");

    // Call the function to print the string in reverse order
    printReverse(inputString);

    return 0;
}

// Function to print a string in reverse order
void printReverse(const char *str) {
    // Calculate the length of the string
    int length = strlen(str);

    // Print the string in reverse order
    printf("String in reverse order: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// The output of the above program is shown as below
/*
Enter a string: Vidyadhar
String in reverse order: rahdaydiV
*/