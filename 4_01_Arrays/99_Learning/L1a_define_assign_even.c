#include <stdio.h>
#define MAX_SIZE_ARRAY 10
int main(){
    int arrayInt[MAX_SIZE_ARRAY], i;

    for(i=0; i < MAX_SIZE_ARRAY; i++){
        arrayInt[i] = i * 2;
    }

    for(i = 0; i < MAX_SIZE_ARRAY; i++){
        printf("%d ", arrayInt[i]);
    }
    return 0;
}

// The output of the above program is shown below:
/* . 
0 2 4 6 8 10 12 14 16 18 
*/