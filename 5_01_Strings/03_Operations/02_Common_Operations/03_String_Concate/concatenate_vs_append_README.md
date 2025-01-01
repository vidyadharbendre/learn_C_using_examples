# String Operations in C: Concatenation vs Appending

This README explains the difference between **concatenation** and **appending** in C string operations, including how they work and when to use them.

## Difference Between Concatenation and Appending

| Feature               | **Concatenation**                                    | **Appending**                                          |
|-----------------------|------------------------------------------------------|-------------------------------------------------------|
| **Definition**         | Joining two or more strings together.                | Adding something (usually a character or small string) to the end of a string. |
| **Function Used**      | Typically done using the `strcat()` function.        | Can be done using `strcat()` or direct modification (e.g., adding a character). |
| **Result**             | Creates a new combined string.                       | Modifies the original string.                         |
| **Space Consideration**| Destination string must be large enough to hold the concatenated result. | Space must be allocated for the string to accommodate additional content. |
| **Examples**           | `"Hello" + " World"` = `"Hello World"`               | `"Hello" + "!"` = `"Hello!"` (appending a character) |

## Example Code for Concatenation and Appending in C

### Concatenation Example

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = " World";

    // Concatenate str2 to str1
    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);
    return 0;
}
```
### Appending Example (Using Library Function)
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";

    // Append a character to str1
    strcat(str1, "!");

    printf("Appended String: %s\n", str1);
    return 0;
}
```
### User-Defined Function for Appending
```c
#include <stdio.h>
#include <string.h>

// User-defined function to append a character to a string
void appendChar(char str[], char ch) {
    int i = 0;
    // Find the end of the string
    while (str[i] != '\0') {
        i++;
    }
    // Append the character
    str[i] = ch;
    str[i + 1] = '\0'; // Null-terminate the string
}

int main() {
    char str1[50] = "Hello";

    // Append '!' using the user-defined function
    appendChar(str1, '!');

    printf("Appended String (User-defined): %s\n", str1);
    return 0;
}
```
### User-Defined Function for Concatenation
```c
#include <stdio.h>
#include <string.h>

// User-defined function to concatenate two strings
void concatenateStrings(char dest[], const char src[]) {
    int i = 0, j = 0;

    // Find the end of the destination string
    while (dest[i] != '\0') {
        i++;
    }

    // Append the source string to the destination string
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';  // Null-terminate the result
}

int main() {
    char str1[50] = "Hello";
    char str2[] = " World";

    // Concatenate str2 to str1 using the user-defined function
    concatenateStrings(str1, str2);

    printf("Concatenated String (User-defined): %s\n", str1);
    return 0;
}

```
## Summary
### Concatenation: 
Typically done using strcat() to join two strings into one.

### Appending: 
Adding characters or strings to the end of another string, either using strcat() or user-defined functions.