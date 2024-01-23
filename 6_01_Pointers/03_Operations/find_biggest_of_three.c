#include <stdio.h>

int findlargest(int *ptrtoa, int *ptrtob, int *ptrtoc);
int findsmallest(int *ptrtoa, int *ptrtob, int *ptrtoc);

int main() {
    int a, b, c;
    int *ptrtoa, *ptrtob, *ptrtoc;

    ptrtoa = &a;
    ptrtob = &b;
    ptrtoc = &c;

    printf("Enter a first number: \n");
    scanf("%d", &a);

    printf("Enter a second number: \n");
    scanf("%d", &b);

    printf("Enter a third number: \n");
    scanf("%d", &c);

    printf("Entered numbers are %d  %d and %d\n", a, b, c);

    printf("The largest element is: %d\n", findlargest(ptrtoa, ptrtob, ptrtoc));
    printf("The smallest element is: %d\n", findsmallest(ptrtoa, ptrtob, ptrtoc));

    return 0;
}

int findlargest(int *ptrtoa, int *ptrtob, int *ptrtoc) {
    int largest;

    if ((*ptrtoa > *ptrtob) && (*ptrtoa > *ptrtoc)) {
        largest = *ptrtoa;
    } else if ((*ptrtob > *ptrtoa) && (*ptrtob > *ptrtoc)) {
        largest = *ptrtob;
    } else {
        largest = *ptrtoc;
    }

    return largest;
}

int findsmallest(int *ptrtoa, int *ptrtob, int *ptrtoc) {
    int smallest;

    if ((*ptrtoa < *ptrtob) && (*ptrtoa < *ptrtoc)) {
        smallest = *ptrtoa;
    } else if ((*ptrtob < *ptrtoa) && (*ptrtob < *ptrtoc)) {
        smallest = *ptrtob;
    } else {
        smallest = *ptrtoc;
    }

    return smallest;
}

//The output of the above program is shown as below:
/*
Enter a first number: 
23
Enter a second number: 
45
Enter a third number: 
11
Entered numbers are 23  45 and 11
The largest element is: 45
The smallest element is: 11
*/