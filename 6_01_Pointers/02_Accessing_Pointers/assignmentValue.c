#include <stdio.h>

int main(){

    int a = 33, b = 66;

    int *ptrtoa, *ptrtob;

    ptrtoa = &a;

    ptrtob = &b;

    printf("a = %d  %d %d\n", a, *ptrtoa, *ptrtob);
    
    printf("b = %d  %d %d\n", b, *ptrtoa, a);

    return 0;
}