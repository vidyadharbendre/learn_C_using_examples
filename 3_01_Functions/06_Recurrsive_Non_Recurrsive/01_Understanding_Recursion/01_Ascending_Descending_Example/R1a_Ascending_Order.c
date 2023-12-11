#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number\n");
    scanf("%d", &num);

    printf("Numbers in Ascending Order: ");

    for (i=1; i <= num; i++){
        printf("%d ", i);
    }

    return 0;
}
