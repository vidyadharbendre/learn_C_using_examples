#include <stdio.h>
#include <string.h>

int user_defined_strcmp(char str1[], char str2[]);

int main() {
    char str1[100], str2[100];

    printf("Enter the source string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the destination string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Source string: %s", str1);
    printf("Destination string: %s", str2);

    int result1 = user_defined_strcmp(str1, str2);
    printf("User-defined strcmp result: %d\n", result1);
    printf("User-defined strcmp: Strings are %s.\n", result1 == 0 ? "equal" : "not equal");

    int result2 = strcmp(str1, str2);
    printf("Library strcmp result: %d\n", result2);
    printf("Library strcmp: Strings are %s.\n", result2 == 0 ? "equal" : "not equal");

    return 0;
}

int user_defined_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    // Explicit check for equality
    if (str1[i] == str2[i]) {
        return 0;
    }

    // If not equal, return the difference
    return str1[i] - str2[i];
}

// The output of the above program is shown as below
/*
Enter the source string: Vidyadhar Bendre
Enter the destination string: Vidyadhar BendrA
Source string: Vidyadhar Bendre
Destination string: Vidyadhar BendrA
User-defined strcmp result: 36
User-defined strcmp: Strings are not equal.
Library strcmp result: 36
Library strcmp: Strings are not equal.
*/

