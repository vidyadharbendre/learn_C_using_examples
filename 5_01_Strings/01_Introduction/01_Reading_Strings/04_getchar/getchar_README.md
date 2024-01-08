# Reading Characters using `getchar` in C

## What is `getchar`?
`getchar` is a function in C used to read a single character from the standard input stream (keyboard) and returns the ASCII value of the character read.

## Why Use `getchar` to Read Characters?
- **Simple Character Input:** Allows reading a single character from the console.
- **Standard Input:** Reads characters from the standard input stream.
- **No Buffer Overflow:** Doesn't cause buffer overflow issues.

## How to Use `getchar` for Reading Characters?
Usage of `getchar` is straightforward for reading individual characters. Here's an example:

```c
#include <stdio.h>

int main() {
    char ch; // Declare a character variable to store the read character

    printf("Enter a character: ");
    ch = getchar(); // Read a character input

    printf("You entered: %c\n", ch); // Display the entered character

    return 0;
}
```
## When to Use getchar for Reading Characters?
- **Single Character Input:** Suitable for reading single characters.
- **Standard Input Handling:** Reads characters from the standard input stream.

## Limitations of getchar for Reading Characters
- **Input Buffer:**-  Doesn't allow reading more than one character at a time.
- **Whitespace Handling:** Treats newline characters and whitespace similarly.

## Where Can getchar be Applied?
getchar is ideal for reading single character inputs in C programs that require standard input handling.

## How Does getchar Work?
Reads a single character from the standard input stream.
Returns the ASCII value of the character read.
Stops reading after a single character is obtained.