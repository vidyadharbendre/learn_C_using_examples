#include <stdio.h>

int main() {
    char str[100]; // Assuming maximum string length is 100 characters

    printf("Enter a string (using gets): ");
    gets(str); // Avoid using gets due to security risks

    printf("String entered using gets: %s\n", str);

    return 0;
}

/* . 
warning: this program uses gets(), which is unsafe.
Enter a string (using gets): Hello
String entered using gets: Hello
*/