#include <stdio.h>

int main(){

    int arrayInt[] = {1, 2, 4, 7, 9, 11};
    int length ;

    length = sizeof(arrayInt)/sizeof(arrayInt[0]);

    printf("sizeof(arrayInt) in bytes %lu\n", sizeof(arrayInt));
    printf("sizeof(arrayInt[0] in bytes %lu\n", sizeof(arrayInt[0]));    
    printf("length of an array %d\n", length);

    return 0;
}