# Recursive Functions README

## Understanding Base Case and Recursive Case

### Base Case

The base case is the termination condition that halts the recursive calls within a function. It represents the simplest scenario where the function returns a value or performs an action without further recursive calls. The primary purpose of the base case is to prevent infinite recursion and to establish an exit condition for the recursive function.

### Recursive Case

The recursive case encompasses the actual recursive process. Within this part of the function, it calls itself with a smaller or simpler version of the original problem until it reaches the base case. By breaking down the problem into smaller instances, the recursive case facilitates the gradual resolution of the problem at hand.

#### Example: Tower of Hanoi

Consider a function to solve the Tower of Hanoi problem:

```c
void towerOfHanoi(int n, char source, char aux, char dest) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, dest);
        return;
    }
    towerOfHanoi(n - 1, source, dest, aux);
    printf("Move disk %d from %c to %c\n", n, source, dest);
    towerOfHanoi(n - 1, aux, source, dest);
}
