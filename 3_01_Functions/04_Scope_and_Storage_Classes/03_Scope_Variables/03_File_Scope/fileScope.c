#include <stdio.h>

int globalVar = 100; // File scope (global variable)

void demonstrateFileScope() {
    printf("File-scope variable: %d\n", globalVar);
}

int main() {
    demonstrateFileScope();
    globalVar = 200; // Accessible and modifiable anywhere in the file.
    printf("Modified file-scope variable: %d\n", globalVar);
    return 0;
}

// The output of the above program is shown as below:
/*
File-scope variable: 100
Modified file-scope variable: 200
*/