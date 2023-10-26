#include <stdio.h>

int main() {
    char text[] = "Hello, World!";
    printf("String with default precision: %s\n", text);
    printf("String with precision of 5: %.5s\n", text);
    
    return 0;
}
