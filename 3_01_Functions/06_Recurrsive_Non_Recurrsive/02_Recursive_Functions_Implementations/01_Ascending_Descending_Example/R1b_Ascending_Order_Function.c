#include <stdio.h>

void printAscending(int fnum);

int main() {
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    printAscending(num);

    return 0;
}
void printAscending(int fnum){
    int fi;
    printf("Numbers in Ascending Order till %d: \n", fnum);

    for (fi=1; fi <= fnum; fi++){
        printf("%d ", fi);
    }
}