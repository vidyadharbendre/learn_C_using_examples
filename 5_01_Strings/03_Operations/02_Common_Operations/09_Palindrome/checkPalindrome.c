/*
A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization, in most cases). In simpler terms, a palindrome remains unchanged when its characters are reversed.

Examples of palindromic words:

"radar"
"level"
"civic"
"deed"
"madam"
Examples of palindromic phrases:

"A man, a plan, a canal: Panama!"
"Able was I ere I saw Elba."
In the context of the C program mentioned earlier, it checks whether a given string is a palindrome by comparing the characters from the beginning to the end and from the end to the beginning. If the string remains the same when read backward, it is considered a palindrome.
*/
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]);

int main() {
    char str[50];

    // Get a string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}
