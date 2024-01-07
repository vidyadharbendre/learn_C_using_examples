#include <stdio.h>
#include <string.h>

int user_defined_strcmp(const char fstr1[], const char fstr2[]);

int main() {
    const char str1[] = "Hello";
    const char str2[] = "Hell";
    int result1 = 0, result2 = 0;

    // Display source and destination strings
    printf("Source string: %s\n", str1);
    printf("Destination string: %s\n", str2);

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
    int fi = 0;
    while (fstr1[fi] != '\0' && fstr2[fi] != '\0' && fstr1[fi] == fstr2[fi]) {
        fi++;
    }
    return (unsigned char)fstr1[fi] - (unsigned char)fstr2[fi];
}

// The output of the above program is shown as below:
/*
Source string: Hello
Destination string: Hello
User-defined strcmp result: 0
User-defined strcmp: Strings are equal.
Library strcmp result: 0
Library strcmp: Strings are equal.
*/

/*
Source string: Hello
Destination string: Hell
User-defined strcmp result: 111
User-defined strcmp: Strings are not equal.
Library strcmp result: 111
Library strcmp: Strings are not equal.
*/