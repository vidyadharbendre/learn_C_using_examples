#include <stdio.h>
#include <string.h>

int main() {
    char largerString[] = "This is a larger string";
    char substring[] = "larger";
    
    int largerLen = strlen(largerString);
    int subLen = strlen(substring);
    
    int found = 0;

    // Iterate through the larger string
    for (int i = 0; i <= largerLen - subLen; ++i) {
        int j;
        // Check for substring match starting at index i
        for (j = 0; j < subLen; ++j) {
            if (largerString[i + j] != substring[j]) {
                break;  // Break if characters don't match
            }
        }
        // If inner loop completed without a break, substring found
        if (j == subLen) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("'%s' found in '%s'\n", substring, largerString);
    } else {
        printf("'%s' not found in '%s'\n", substring, largerString);
    }

    return 0;
}

// The output of the above program is shown below:
/* . 
'larger' found in 'This is a larger string'
*/