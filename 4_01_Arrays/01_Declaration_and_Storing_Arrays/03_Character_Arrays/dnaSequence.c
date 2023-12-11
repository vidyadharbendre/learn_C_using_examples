#include <stdio.h>
#include <string.h>

#define MAX_SEQUENCES 10 // Maximum number of genetic sequences
#define MAX_SEQUENCE_LENGTH 50 // Maximum length of a genetic sequence

int main() {
    char dnaSequences[MAX_SEQUENCES][MAX_SEQUENCE_LENGTH]; // Array of strings for DNA sequences
    
    // Example DNA sequences
    strcpy(dnaSequences[0], "ATCGATCGATCG");
    strcpy(dnaSequences[1], "CGTAAGCTGCTA");
    strcpy(dnaSequences[2], "ATAGCTAGCTAG");
    // ... and so on
    
    // Accessing and printing DNA sequences
    printf("DNA Sequences:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Sequence %d: %s\n", i + 1, dnaSequences[i]);
    }

    return 0;
}
