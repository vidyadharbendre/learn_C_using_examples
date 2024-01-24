# Memory Allocation in C

## Overview

This project provides examples and explanations for memory allocation in the C programming language. 
It covers dynamic memory allocation functions such as malloc, calloc, realloc, and free, along with a brief comparison between static and dynamic memory.

## Table of Contents

- [Introduction](#introduction)
- [Static vs. Dynamic Memory](#static-vs-dynamic-memory)
- [Malloc](#malloc)
- [Calloc](#calloc)
- [Realloc](#realloc)
- [Free](#free)

## Introduction

Memory allocation is a crucial aspect of programming, and C provides various functions to manage memory dynamically. This project explains the concepts and usage of malloc, calloc, realloc, and free.

## Static vs. Dynamic Memory

Static memory allocation involves allocating memory at compile time, while dynamic memory allocation allows allocating memory at runtime. 
Dynamic memory is managed using pointers.

## Malloc

The `malloc` function allocates a specified number of bytes of memory.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    // Check for malloc success and use the allocated memory
    free(ptr);
    return 0;
}
```

## Calloc
The calloc function allocates memory for an array of elements, initializing them to zero.
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    // Check for calloc success and use the allocated memory
    free(ptr);
    return 0;
}
```

## Realloc
The realloc function changes the size of the previously allocated memory block.
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    // Use the allocated memory
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    // Check for realloc success and use the reallocated memory
    free(ptr);
    return 0;
}

```

## Free
The free function deallocates the dynamically allocated memory.
```c
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    // Use the allocated memory
    free(ptr);
    return 0;
}
```

