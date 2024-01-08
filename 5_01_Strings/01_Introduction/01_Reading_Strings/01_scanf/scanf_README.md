# Reading Strings using `scanf` in C

## What is `scanf`?
`scanf` is a function in C used to read input from the standard input stream (keyboard) based on the specified format. It is commonly used for reading various types of data, including strings.

## Why Use `scanf` to Read Strings?
- **Convenience:** Offers a quick way to read string inputs.
- **Formatted Input:** Allows defining specific format specifiers for expected inputs.
- **Ease of Use:** Simple and straightforward for basic string input operations.

## How to Use `scanf` for Reading Strings?
The `scanf` function uses the `%s` format specifier to read a string. Here's a basic usage example:

```c
#include <stdio.h>

int main() {
    char str[50]; // Declare a character array to store the string

    printf("Enter a string: ");
    scanf("%s", str); // Read a string input

    printf("You entered: %s\n", str); // Display the entered string

    return 0;
}
```
## When to Use scanf for Reading Strings?
Simple Input Needs: Suitable for basic string inputs without spaces.
Limited String Length: When the string input is limited and known not to exceed the buffer size.

## Where Can scanf be Applied?
scanf can be used in various C programs that require reading string inputs from the user, such as command-line utilities, simple text-based interfaces, or programs requiring specific formatted string inputs.

## Limitations of scanf for Reading Strings
- **Space Separation:** Doesn't handle string inputs containing spaces well due to whitespace separation.
- **Buffer Overflow:** May lead to buffer overflow if the input exceeds the size of the character array.

## How Does scanf Work?
Reads characters from the standard input until whitespace (space, newline) or EOF.
Stores the characters into the specified character array (char[]).