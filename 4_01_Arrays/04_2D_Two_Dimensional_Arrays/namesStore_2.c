#include <stdio.h>

#define MAX_NAMES 5
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];

    // Getting names from user input
    printf("Enter 5 names:\n");
    for (int i = 0; i < MAX_NAMES; ++i) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); // Assuming no spaces in names
    }

    // Displaying the entered names using a single loop and a single index
    printf("\nEntered Names:\n");
    for (int i = 0; i < MAX_NAMES * MAX_LENGTH; ++i) {
        if (names[0][i] == '\0') {  // '\0' indicates the end of a string
            printf("\n");  // Move to the next line after each name
        } else {
            printf("%c", names[0][i]);
        }
    }

    return 0;
}
