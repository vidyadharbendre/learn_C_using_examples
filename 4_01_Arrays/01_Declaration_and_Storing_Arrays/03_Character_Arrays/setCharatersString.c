#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 100 // Maximum length of a sentence

int main() {
    char sentence[MAX_SENTENCE_LENGTH]; // Array for a sentence
    
    // Example sentence
    strcpy(sentence, "This is an example sentence.");
    
    // Printing the sentence
    printf("Sentence: %s\n", sentence);

    return 0;
}
