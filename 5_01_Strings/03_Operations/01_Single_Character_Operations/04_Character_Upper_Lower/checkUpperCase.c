#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'A';

    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    } else {
        printf("%c is not an uppercase letter.\n", ch);
    }

    printf("Lowercase of %c is %c.\n", ch, tolower(ch));

    return 0;
}

// The output of the above program is shown as below:
/*
A is an uppercase letter.
Lowercase of A is a.
*/