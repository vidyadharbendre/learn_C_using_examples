/*
Author:
Vidyadhar Bendre

Date:
7th January 2024

Email:
vidyadhar.bendre@gmail.com

Purpose:
This program showcases the usage of string copying and string concatenation operations in C using the functions strcpy and strcat from the string.h library.

Explanation:
- The program initializes two source strings, str1 with "Hello" and str2 with "World".
- It initializes two destination strings, dest and dest_copy, as empty strings.
- Source strings, str1 and str2, are displayed.
- strcpy is used to copy the content of str2 to dest_copy, displaying the copied string.
- strcpy is used to copy str1 to dest, and then strcat is used to append str2 to dest, displaying the appended string.
- The output demonstrates the copied and appended strings.

Note:
- The program uses strcpy to copy strings and strcat to append strings, both available in the string.h library.
*/


#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char dest[50] = ""; // Initialize dest as an empty string
    char dest_copy[50] = ""; // Initialize dest_copy as an empty string

    printf("Source string 1: %s\n", str1);
    printf("Source string 2: %s\n", str2);

    strcpy(dest_copy, str2);
    printf("Copied string: %s\n", dest_copy);

    strcpy(dest, str1);
    strcat(dest, str2);
    printf("Appended string: %s\n", dest);

    return 0;
}

// The output of the above program is shown as below
/*
Source string 1: Hello
Source string 2: World
Copied string: World
Appended string: HelloWorld
*/