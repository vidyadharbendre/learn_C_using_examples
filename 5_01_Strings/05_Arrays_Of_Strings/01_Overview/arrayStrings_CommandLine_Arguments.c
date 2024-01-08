#include <stdio.h>

#define MAX_ARGS 10
#define MAX_ARG_LENGTH 20

int main() {
    char args[MAX_ARGS][MAX_ARG_LENGTH];
    int argc = 0;

    printf("Enter command-line arguments (up to %d arguments, each %d characters or less):\n", MAX_ARGS, MAX_ARG_LENGTH - 1);
    while (argc < MAX_ARGS) {
        printf("Argument %d: ", argc);
        if (scanf("%19s", args[argc]) != 1) {
            break;
        }
        argc++;
    }

    printf("\nNumber of arguments: %d\n", argc);

    printf("Arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, args[i]);
    }

    return 0;
}
// The output of the above program is shown as below:
/*
Argument 0: Vidyadhar
Argument 1: Bendre
Argument 2: Poornima
Argument 3: Bendre
Argument 4: Atharva
Argument 5: Bendre
Argument 6: Akshara
Argument 7: Bendre
Argument 8: Shashikant
Argument 9: K
*/