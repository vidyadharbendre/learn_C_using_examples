#include <stdio.h>

void demonstrateFunctionScope() {
label:
    printf("This is a label with function scope.\n");
    goto label; // Infinite loop (for demonstration only)
}

int main() {
    // demonstrateFunctionScope(); // Uncomment to test (infinite loop)
    return 0;
}
