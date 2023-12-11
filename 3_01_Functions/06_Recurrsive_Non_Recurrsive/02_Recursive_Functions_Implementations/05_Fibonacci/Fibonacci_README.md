# Recursive Functions README

## Understanding Base Case and Recursive Case

### Base Case

The base case is the termination condition that halts the recursive calls within a function. It represents the simplest scenario where the function returns a value without further recursive calls. The primary purpose of the base case is to prevent infinite recursion and to set an exit condition for the recursive function.

### Recursive Case

The recursive case encompasses the actual recursive process. Within this part of the function, it calls itself with a smaller or simpler version of the original problem until it reaches the base case. By breaking down the problem into smaller instances, the recursive case facilitates the gradual resolution of the problem at hand.

#### Example: Fibonacci Series

Consider a function to generate the Fibonacci series:

```c
int fibonacci(int n) {
    // Base case
    if (n <= 1) {
        return n;
    } else {
        // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
