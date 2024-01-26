#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *ptrtoFILE;
    char ch;

    ptrtoFILE = fopen("abc.txt", "r");

    if (ptrtoFILE == NULL){
        printf("Error in opening!");
        exit(1);
    }
    else{

        ch = fgetc(ptrtoFILE);
        printf("Characte read from the file: %c\n", ch);
        fclose(ptrtoFILE);
    }

    return 0;
}