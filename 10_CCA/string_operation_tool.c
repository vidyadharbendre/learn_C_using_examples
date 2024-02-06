#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Concatenated string: %s\n", strcat(str1, str2));
    printf("Length of first string: %d\n", strlen(str1));
    printf("Substring of second string: %s\n", strstr(str2, "ing"));

    return 0;
}
