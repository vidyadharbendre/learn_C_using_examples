#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int isVowel(char ch);
void countVowelsAndConsonants(char sentence[]);

int main() {
    char sentence[MAX_LENGTH];

    // Read a sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character from the input
    sentence[strcspn(sentence, "\n")] = '\0';

    // Call the function to count vowels and consonants
    countVowelsAndConsonants(sentence);

    return 0;
}

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to count the frequency of vowels and consonants
void countVowelsAndConsonants(char sentence[]) {
    int vowels[5] = {0}; // Array to store the count of each vowel (a, e, i, o, u)
    int consonants = 0;

    // Traverse each character in the sentence
    for (int i = 0; i < strlen(sentence); i++) {
        char currentChar = tolower(sentence[i]);

        // Check if the character is an alphabet
        if (isalpha(currentChar)) {
            // Check if it is a vowel
            if (isVowel(currentChar)) {
                switch (currentChar) {
                    case 'a':
                        vowels[0]++;
                        break;
                    case 'e':
                        vowels[1]++;
                        break;
                    case 'i':
                        vowels[2]++;
                        break;
                    case 'o':
                        vowels[3]++;
                        break;
                    case 'u':
                        vowels[4]++;
                        break;
                }
            } else {
                // If it is not a vowel, it is a consonant
                consonants++;
            }
        }
    }

    // Display the frequency of each vowel
    printf("Frequency of vowels:\n");
    printf("A: %d\n", vowels[0]);
    printf("E: %d\n", vowels[1]);
    printf("I: %d\n", vowels[2]);
    printf("O: %d\n", vowels[3]);
    printf("U: %d\n", vowels[4]);

    // Display the total count of consonants
    printf("Total consonants: %d\n", consonants);
}

// The output of the above program is shown as below
/*
Enter a sentence: Vidyadhar Bendre
Frequency of vowels:
A: 2
E: 2
I: 1
O: 0
U: 0
Total consonants: 10
*/