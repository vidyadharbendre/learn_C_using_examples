#include <stdio.h>
#include <string.h>

int user_defined_strcmp(const char fstr1[], const char fstr2[]);

int main() {
    const char str1[] = "Hello World";
    const char str2[] = "Hello Worl";
    int result1 = 0, result2 = 0;

    // Display source and destination strings
    printf("Source string: %s\n", str1);
    printf("Destination string: %s\n", str2);

    // Check lengths first
    if (strlen(str1) != strlen(str2)) {
        printf("Lengths are different. Strings are not equal.\n");
        return 0; // Exit early as the lengths are different
    }

    // Using user-defined function
    result1 = user_defined_strcmp(str1, str2);
    printf("User-defined strcmp result: %d\n", result1);
    if (result1 == 0) {
        printf("User-defined strcmp: Strings are equal.\n");
    } else {
        printf("User-defined strcmp: Strings are not equal.\n");
    }

    // Using library function
    result2 = strcmp(str1, str2);
    printf("Library strcmp result: %d\n", result2);
    if (result2 == 0) {
        printf("Library strcmp: Strings are equal.\n");
    } else {
        printf("Library strcmp: Strings are not equal.\n");
    }

    return 0;
}

// User-defined string comparison function without pointers
int user_defined_strcmp(const char fstr1[], const char fstr2[]) {
    int length = strlen(fstr1); // Calculate the length of the strings

    // Check if lengths are equal
    if (length != strlen(fstr2)) {
        return -1; // Strings are not equal if lengths are different
    }

    // Iterate through each character and compare
    for (int i = 0; i < length; ++i) {
        if (fstr1[i] != fstr2[i]) {
            return (unsigned char)fstr1[i] - (unsigned char)fstr2[i];
        }
    }
    return 0; // Strings are equal
}

// The output of the above program is shown as below:

/*
Source string: Hello World
Destination string: Hello Worl
Lengths are different. Strings are not equal.
*/

/*
Source string: Hello
Destination string: Hello
User-defined strcmp result: 0
User-defined strcmp: Strings are equal.
Library strcmp result: 0
Library strcmp: Strings are equal.
*/