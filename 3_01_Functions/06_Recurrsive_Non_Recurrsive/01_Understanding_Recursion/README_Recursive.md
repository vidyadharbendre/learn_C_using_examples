# Recursive Functions README

## Understanding Base Case and Recursive Case

### Base Case

The base case is the termination condition that halts the recursive calls within a function. It signifies the simplest scenario where the function returns a value without further recursive calls. 
The primary purpose of the base case is to prevent infinite recursion and to establish an exit condition for the recursive function.

### Recursive Case

The recursive case encompasses the actual recursive process. Within this part of the function, it calls itself with a smaller or simpler version of the original problem until it converges toward the base case. By breaking down the problem into smaller instances, the recursive case facilitates the gradual resolution of the problem at hand.

#### Example:

Consider a function to calculate the factorial of a number:

```python
def factorial(n):
    # Base case
    if n == 0 or n == 1:
        return 1
    # Recursive case
    else:
        return n * factorial(n - 1)

def sum_natural_numbers(n):
    # Base case
    if n == 0:
        return 0
    
    # Recursive case
    else:
        return n + sum_natural_numbers(n - 1)

int power(int base, int exponent) {
    // Base case
    if (exponent == 0) {
        return 1;
    } else {
        // Recursive case
        return base * power(base, exponent - 1);
    }
}


int gcd(int a, int b) {
    // Base case
    if (b == 0) {
        return a;
    } else {
        // Recursive case
        return gcd(b, a % b);
    }
}

int fibonacci(int n) {
    // Base case
    if (n <= 1) {
        return n;
    } else {
        // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int binarySearch(int arr[], int start, int end, int target) {
    if (end >= start) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            return binarySearch(arr, start, mid - 1, target);
        }
        return binarySearch(arr, mid + 1, end, target);
    }
    return -1;
}

void towerOfHanoi(int n, char source, char aux, char dest) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, dest);
        return;
    }
    towerOfHanoi(n - 1, source, dest, aux);
    printf("Move disk %d from %c to %c\n", n, source, dest);
    towerOfHanoi(n - 1, aux, source, dest);
}

