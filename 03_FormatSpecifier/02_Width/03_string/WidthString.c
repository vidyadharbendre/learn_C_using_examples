#include <stdio.h>

int main() {
    char text[] = "Hello, World!";

    printf("1 - String with default width............:%s\n", text);
    printf("2 - String with width of 19 characters...:%19s\n", text);
    printf("3 - String with width of 15 characters...:%15s\n", text);
    return 0;
}

// The output of the above program as follows

/*    

1 - String with default width............:Hello, World!
2 - String with width of 19 characters...:      Hello, World!
3 - String with width of 15 characters...:  Hello, World!

*/