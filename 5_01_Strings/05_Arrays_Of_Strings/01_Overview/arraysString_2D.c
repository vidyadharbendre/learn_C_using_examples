#include <stdio.h>

int main() {
    // Declaration and initialization of an array of strings
    char strings[][20] = {
        "Hello",        // strings[0]
        "World",        // strings[1]
        "Programming",  // strings[2]
        "In",           // strings[3]
        "C"             // strings[4]
    };

    // Accessing elements of the array of strings
    printf("%s\n", strings[0]); // Output: Hello
    printf("%s\n", strings[1]); // Output: World
    printf("%s\n", strings[2]); // Output: Programming
    printf("%s\n", strings[3]); // Output: In
    printf("%s\n", strings[4]); // Output: C

    return 0;
}

// The output of the above program is shown as below:
/*  
Hello
World
Programming
In
C
*/