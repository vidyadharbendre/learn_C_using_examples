#include <stdio.h>

int main() {
    char alphabets[26]; // Array for English alphabets
    
    // Filling the array with alphabets
    for (int i = 0; i < 26; ++i) {
        alphabets[i] = 'A' + i; // Assuming uppercase English alphabet
    }
    
    // Printing the English alphabet
    printf("English Alphabet:\n");
    for (int i = 0; i < 26; ++i) {
        printf("%c ", alphabets[i]);
    }
    printf("\n");

    return 0;
}
