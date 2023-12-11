# Recursive Functions README

## Understanding Base Case and Recursive Case

### Base Case

The base case is the termination condition that halts the recursive calls within a function. It represents the simplest scenario where the function returns a value without further recursive calls. The primary purpose of the base case is to prevent infinite recursion and to set an exit condition for the recursive function.

### Recursive Case

The recursive case encompasses the actual recursive process. Within this part of the function, it calls itself with a smaller or simpler version of the original problem until it reaches the base case. By breaking down the problem into smaller instances, the recursive case facilitates the gradual resolution of the problem at hand.

#### Example: Calculating GCD

Consider a function to calculate the Greatest Common Divisor (GCD) of two numbers:

```c
int gcd(int a, int b) {
    // Base case
    if (b == 0) {
        return a;
    } else {
        // Recursive case
        return gcd(b, a % b);
    }
}
