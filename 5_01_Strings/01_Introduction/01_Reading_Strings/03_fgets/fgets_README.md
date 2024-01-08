# Reading Strings using `fgets` in C

## What is `fgets`?
`fgets` is a function in C used to read input from the standard input stream (keyboard) as a string. It reads characters until a newline character (`\n`) or EOF is encountered, similar to `gets`, but it allows specifying the maximum number of characters to read.

## Why Use `fgets` to Read Strings?
- **Controlled Input:** Allows defining a maximum number of characters to read, preventing buffer overflow.
- **Flexible Input:** Reads strings containing spaces and handles newline characters.
- **Safe Usage:** Offers a safer alternative compared to `gets` as it requires buffer size specification.

## How to Use `fgets` for Reading Strings?
Usage of `fgets` involves specifying the maximum number of characters to read. Here's an example:

```c
#include <stdio.h>

int main() {
    char str[50]; // Declare a character array to store the string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string input

    printf("You entered: %s\n", str); // Display the entered string

    return 0;
}
```
## When to Use fgets for Reading Strings?
- **Controlled Input Length:** Suitable when limiting the maximum number of characters to read.
- **Safer Input Handling:** Provides a safer alternative compared to gets due to size specification.

## Limitations of fgets for Reading Strings
- **Including Newline:** Reads and includes the newline character (\n) if the buffer size allows.
- **Buffer Size Awareness:** Requires specifying the maximum buffer size to prevent truncation.

## Where Can fgets be Applied?
fgets is ideal for reading string inputs in C programs that require controlled input sizes and safer input handling.

## How Does fgets Work?
Reads characters from the standard input until a newline character (\n) or EOF.
Stores the characters into the specified character array (char[]).
Stops reading when either the specified limit is reached or a newline character is encountered.

