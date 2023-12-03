# Storage Classes in C Programming

In C programming, 
- Storage classes determine the scope, lifetime, and visibility of variables. 
- They define how and where variables are stored in memory during the program's execution.
- There are four main storage classes:

## 1. `auto`

- The `auto` storage class is the default for local variables.
- Variables declared within a function without any storage class specifier are considered `auto`.
- They are created when the block they are defined in is entered and destroyed when the block is exited.

Example:
```c
void myFunction() {
    auto int num = 10;
    // 'num' is an auto variable
}
```
## 2. `register`
- The register storage class is used to define local variables that should be stored in CPU registers for faster access.
- Modern compilers often optimize variable storage, making the use of register less significant.

Example:

```c
void myFunction() {
    register int x = 5;
    // 'x' is a register variable (may not always be stored in a register)
}
```
## 3. `static`
- The static storage class can be applied to both local and global variables.
- For local variables, it preserves their value between function calls.
- For global variables, it restricts their visibility within the file where they are declared.

Example:
```c
void myFunction() {
    static int count = 0;
    // 'count' retains its value between function calls
}
```
## 4. `extern`

- The extern storage class is used to declare variables that are defined in another source file.
- It allows variables to be declared in one file and accessed in other files.

Example:

```c
// File 1 (file1.c)
extern int count; // Declaration of an external variable

// File 2 (file2.c)
int count = 5; // Definition of the external variable

```
Understanding these storage classes is crucial for managing variable lifetimes, memory usage, and program structure in C.
