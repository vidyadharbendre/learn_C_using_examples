#include <stdio.h>

void user_defined_append(const char src1[], const char src2[], char dest[], int dest_max_length);

int main() {
    char String1[] = "Hello";
    char String2[] = "World";
    char appended1[50] = ""; // To store String2 appended to String1
    char appended2[50] = ""; // To store String1 appended to String2

    printf("Source string 1: %s\n", String1);
    printf("Source string 2: %s\n", String2);

    user_defined_append(String1, String2, appended1, sizeof(appended1));
    printf("String1 appended with String2: %s\n", appended1);

    user_defined_append(String2, String1, appended2, sizeof(appended2));
    printf("String2 appended with String1: %s\n", appended2);

    return 0;
}

// User-defined string appending function without using standard library functions
void user_defined_append(const char src1[], const char src2[], char dest[], int dest_max_length) {
    int i = 0, j = 0;

    // Copy src1 to dest
    while (src1[i] != '\0' && i < dest_max_length - 1) {
        dest[i] = src1[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the dest array

    // Append src2 to dest
    while (src2[j] != '\0' && i < dest_max_length - 1) {
        dest[i] = src2[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Null-terminate the dest array
}

// The output of the above program is shown as below

/*
Source string 1: Hello
Source string 2: World
String1 appended with String2: HelloWorld
String2 appended with String1: WorldHello
*/