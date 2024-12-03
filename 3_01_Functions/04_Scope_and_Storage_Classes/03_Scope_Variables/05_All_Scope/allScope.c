#include <stdio.h>

// File scope variable
int globalVar = 50;

// Function prototypes
void demonstrateFileScope();
void demonstrateBlockScope();

int main() {
    printf("Accessing file-scope variable in main: %d\n", globalVar);
    
    demonstrateFileScope();
    demonstrateBlockScope();

    return 0;
}

void demonstrateFileScope() {
    printf("Accessing file-scope variable in another function: %d\n", globalVar);
}

void demonstrateBlockScope() {
    int localVar = 10; // Block scope
    printf("Block-scope variable in function: %d\n", localVar);

    if (localVar > 0) {
        int nestedVar = 20; // Nested block scope
        printf("Nested block-scope variable: %d\n", nestedVar);
    }
    // printf("%d", nestedVar); // Error: 'nestedVar' not accessible here.
}

//The output of the above program is shown as below:
/*
Accessing file-scope variable in main: 50
Accessing file-scope variable in another function: 50
Block-scope variable in function: 10
Nested block-scope variable: 20
*/