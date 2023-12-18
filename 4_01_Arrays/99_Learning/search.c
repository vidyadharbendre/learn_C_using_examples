#include <stdio.h>

int main(){

    int array[] = {1, 4, 8, 9, 10, 12, 16};

    int length, target, s=0, e, m, found = 0;
    length = sizeof(array)/sizeof(array[0]);
    printf("The total length of an array is : %d\n", length);

    printf("Enter the number to be search for\n");
    scanf("%d", &target);

    s = 0;
    e = length-1;    

    printf("target: %d\n", target);

    while (s <= e){
        static int i;
        m = s + (e - s)/2;

        printf("i and mid point : %d %d\n", i, m);
        printf("array[%d] and target = %d and %d\n", m, target, array[m]);

        if (array[m] == target){
            found = 1;
            printf("Element found at index %d\n", m);
            break;
        }

        if (target < array[m]){
            e = m-1;        
        }
        else{
            s = m+1;
        }
        i += 1;
    }

    if (!found){
        printf("Element not found");
    }
        return 0;
}