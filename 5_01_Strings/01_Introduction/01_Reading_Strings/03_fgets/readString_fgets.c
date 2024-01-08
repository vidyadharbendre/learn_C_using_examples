#include <stdio.h>

int main(){

    char str[50];

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("String read using fgets: %s\n", str);

    return 0;
}

// The output of the above program is shown as below:

/*
Enter a string : Vidyadhar Bendre
String read using fgets: Vidyadhar Bendre

*/