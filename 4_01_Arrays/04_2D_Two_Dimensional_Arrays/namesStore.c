/* . 
This code declares a 2-dimensional array of characters (names) to store 5 names, where each name can have a maximum length of 50 characters (MAX_LENGTH). It uses loops to both input the names and then display the entered names.

Please note that this example assumes the names do not contain spaces and that the user inputs the names one after the other without spaces between them. If your names include spaces or if you want to handle spaces differently, you might need to use a different input method, such as fgets(), to handle spaces within the names.
*/

#include <stdio.h>

#define MAX_NAMES 5  // total number of students
#define MAX_LENGTH 50 // Maximum length for each name

int main() {
    char names[MAX_NAMES][MAX_LENGTH]; // Array to store 5 names, each with a maximum length of 50 characters

    // Getting names from user input
    printf("Enter 5 names:\n");
    for (int i = 0; i < MAX_NAMES; ++i) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); // Assuming no spaces in names
    }

    // Displaying the entered names
    printf("\nEntered Names:\n");
    for (int i = 0; i < MAX_NAMES; ++i) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
