# ASCII and Unicode Character Encoding

ASCII (American Standard Code for Information Interchange) and Unicode are character encoding standards used to represent text characters in computers and digital communication.

## ASCII (American Standard Code for Information Interchange)

- ASCII is a character encoding standard that represents text characters using 7-bit encoding.
- It was originally developed in the early days of computing and is primarily used for representing characters in the English language.
- Each ASCII character is represented by a 7-bit binary code, allowing for a total of 128 characters.
- Common ASCII characters include uppercase and lowercase letters, digits, punctuation marks, and control characters.
- ASCII characters are widely used in programming, data storage, and communication protocols.

## Unicode

- Unicode is a modern character encoding standard that provides a universal character set to represent text characters from all writing systems.
- Unlike ASCII, Unicode uses 16-bit or 32-bit encoding, allowing it to represent a vast range of characters from different languages, symbols, and emojis.
- Unicode is designed to be a comprehensive character encoding standard that can represent characters from virtually any written language in the world.
- Unicode is essential for supporting multilingual content in software, websites, and digital communication.

## Examples

### ASCII Character Handling in C

```c
#include <stdio.h>

int main() {
    char asciiChar = 'A'; // Assign an ASCII character

    printf("ASCII Character: %c\n", asciiChar);
    printf("ASCII Value: %d\n", asciiChar);

    return 0;
}
