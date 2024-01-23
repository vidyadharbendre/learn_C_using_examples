#include <stdio.h>
#include <string.h>

int compareStrings(char str1[], char str2[]);
void concatenateStrings(char result[], char str1[], char str2[]);
int findStringLength(char str[]);

int main() {
    char str1[50], str2[50], result[100];

    // Get strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare strings
    int compareResult = compareStrings(str1, str2);
    if (compareResult == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // Concatenate strings
    concatenateStrings(result, str1, str2);
    printf("Concatenated string: %s\n", result);

    // Find string length
    int length = findStringLength(str1);
    printf("Length of the first string: %d\n", length);

    return 0;
}

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

// Function to concatenate two strings
void concatenateStrings(char result[], char str1[], char str2[]) {
    strcpy(result, str1);
    strcat(result, str2);
}

// Function to find the length of a string
int findStringLength(char str[]) {
    return strlen(str);
}

// The output of the above program is shown as below
/*
Enter the first string: moon
Enter the second string: moon
Strings are equal
Concatenated string: moonmoon
Length of the first string: 4
*/

/*
Enter the first string: vidyadhar
Enter the second string: shashikanth
Strings are not equal
Concatenated string: vidyadharshashikanth
Length of the first string: 9
*/