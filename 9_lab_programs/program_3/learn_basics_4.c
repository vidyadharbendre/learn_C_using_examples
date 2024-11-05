#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" "); // Print spaces
        }
        for (int j = 1; j <= i; j++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    return 0;
}
