#include <stdio.h>
#include <string.h>

int main() {
    const char *largerString = "This is a larger string";
    const char *substring = "larger";

    // Using strstr to check for the presence of the substring
    if (strstr(largerString, substring) != NULL) {
        printf("'%s' found in '%s'\n", substring, largerString);
    } else {
        printf("'%s' not found in '%s'\n", substring, largerString);
    }

    return 0;
}

// The output of the above program is shown as below:
/* .  
'larger' found in 'This is a larger string'
*/