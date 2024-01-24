# Memory Allocation in C: Stack vs Heap

## Stack Memory

- **Allocation Type:** Memory allocation in the stack is done in a last-in-first-out (LIFO) manner, and it is managed by the compiler.
- **Size:** Generally, stack memory is limited in size.
- **Usage:** It is used for storing local variables and function call information.
- **Allocation/Deallocation:** Memory allocation and deallocation in the stack are handled automatically by the compiler.
- **Speed:** Access to stack memory is faster compared to heap memory.

## Heap Memory

- **Allocation Type:** Memory allocation in the heap is dynamic and can be done in any order. It is managed by the programmer.
- **Size:** Heap memory is typically larger than stack memory, and it depends on the system.
- **Usage:** It is used for dynamic memory allocation, such as creating objects, arrays, etc.
- **Allocation/Deallocation:** Memory allocation and deallocation in the heap are manual and need to be explicitly managed by the programmer using functions like `malloc`, `calloc`, `realloc`, and `free`.
- **Speed:** Access to heap memory is relatively slower compared to stack memory.

## Static Memory Allocation vs. Dynamic Memory Allocation

### Static Memory Allocation

- Variables are assigned memory at compile-time.
- The size and type of memory are fixed during the program's execution.
- Examples include global variables, local static variables, etc.

### Dynamic Memory Allocation

- Memory is allocated at runtime.
- It allows the program to allocate memory dynamically as needed.
- Examples include using functions like `malloc`, `calloc`, `realloc` to allocate memory on the heap.

In summary, stack memory is fast but limited and has automatic memory management, while heap memory is larger, requires manual management, and is suitable for dynamic memory allocation. Both serve different purposes, and their effective use depends on the requirements of the program.
