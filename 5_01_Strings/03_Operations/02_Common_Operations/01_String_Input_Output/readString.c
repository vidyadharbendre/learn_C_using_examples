#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum string length is 100 characters

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String entered using scanf: %s\n", str);

    return 0;
}

// The output of the above program is:
/* . 
Enter a string: Hello
String entered using scanf: Hello
*/