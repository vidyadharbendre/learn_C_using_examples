#include <stdio.h>

int main() {
    char text[] = "Hello, World!";
    printf("String with default width: %s\n", text);
    printf("String with width of 15 characters: %15s\n", text);
    
    return 0;
}
