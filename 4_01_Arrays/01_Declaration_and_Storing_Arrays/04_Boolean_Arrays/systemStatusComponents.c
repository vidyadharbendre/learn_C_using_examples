#include <stdio.h>
#include <stdbool.h>

#define NUM_COMPONENTS 10 // Number of system components

int main() {
    bool statusFlags[NUM_COMPONENTS] = {true, false, true, true, false}; // Example status flags
    
    // Accessing and printing status flags
    printf("Status Flags for System Components:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Component %d Status: %s\n", i + 1, statusFlags[i] ? "true" : "false");
    }

    return 0;
}
