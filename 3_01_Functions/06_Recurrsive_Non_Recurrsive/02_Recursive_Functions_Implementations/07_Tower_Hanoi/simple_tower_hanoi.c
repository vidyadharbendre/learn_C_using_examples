/*
 * Tower of Hanoi Using Recursion
 *
 * Description:
 * The Tower of Hanoi is a classic mathematical puzzle involving three rods and a number of disks of 
 * different sizes. The objective is to move all the disks from the source rod to the destination rod 
 * following these rules:
 * 1. Only one disk can be moved at a time.
 * 2. A disk can only be placed on top of a larger disk.
 * 3. Disks must be moved using the auxiliary rod as a temporary holding area.
 *
 * Algorithm:
 * 1. If there is only one disk (`n == 1`), move it directly from the source to the destination rod.
 * 2. Otherwise:
 *    a. Move the top `n-1` disks from the source rod to the auxiliary rod using the destination rod.
 *    b. Move the largest disk (nth disk) directly from the source rod to the destination rod.
 *    c. Move the `n-1` disks from the auxiliary rod to the destination rod using the source rod.
 * 3. Repeat the process until all disks are moved to the destination rod.
 *
 * Mathematical Concept:
 * The problem is solved recursively. The number of moves required to solve the Tower of Hanoi 
 * problem with `n` disks is `2^n - 1`. Each step involves breaking the problem into smaller 
 * subproblems of size `n-1`.
 *
 * Input:
 * The number of disks (`n`) to move, specified in the program.
 *
 * Output:
 * The program prints each step of moving a disk from one rod to another.
 *
 * Example:
 * Input:
 *   Number of disks: 3
 * Output:
 *   Move disk 1 from A to C
 *   Move disk 2 from A to B
 *   Move disk 1 from C to B
 *   Move disk 3 from A to C
 *   Move disk 1 from B to A
 *   Move disk 2 from B to C
 *   Move disk 1 from A to C
 *
 * Complexity:
 * - Time Complexity: O(2^n) 
 *   (The number of steps doubles with each additional disk).
 * - Space Complexity: O(n) 
 *   (Due to the recursive function call stack).
 *
 * Program Objective:
 * Demonstrate the use of recursion to solve the Tower of Hanoi problem, which involves multiple 
 * levels of recursive calls.
 */

#include <stdio.h>

// Function Declarations
void towerOfHanoi(int fn, char fsource, char fdestination, char fauxiliary);
void moveDisk(int fn, char fsource, char fdestination);

// Main function
int main() {
    // Specify the number of disks
    int fn = 3; // Change this value for different input sizes

    // Display the problem size
    printf("Tower of Hanoi with %d disks:\n", fn);

    // Call the recursive Tower of Hanoi function
    towerOfHanoi(fn, 'A', 'C', 'B'); // A: Source, C: Destination, B: Auxiliary

    return 0;
}

/**
 * Recursive function to solve Tower of Hanoi problem.
 * Moves `fn` disks from the source rod to the destination rod using the auxiliary rod.
 */
void towerOfHanoi(int fn, char fsource, char fdestination, char fauxiliary) {
    // Base Case: If there's only one disk, move it directly
    if (fn == 1) {
        moveDisk(fn, fsource, fdestination);
        return;
    }

    // Recursive Case:

    // Step 1: Move the top `n-1` disks from source to auxiliary rod
    towerOfHanoi(fn - 1, fsource, fauxiliary, fdestination);

    // Step 2: Move the nth (largest) disk from source to destination
    moveDisk(fn, fsource, fdestination);

    // Step 3: Move the `n-1` disks from auxiliary to destination rod
    towerOfHanoi(fn - 1, fauxiliary, fdestination, fsource);
}

/**
 * Function to display the movement of a single disk.
 */
void moveDisk(int fn, char fsource, char fdestination) {
    printf("Move disk %d from %c to %c\n", fn, fsource, fdestination);
}

/*
 * Output Example:
 * Tower of Hanoi with 3 disks:
 * Move disk 1 from A to C
 * Move disk 2 from A to B
 * Move disk 1 from C to B
 * Move disk 3 from A to C
 * Move disk 1 from B to A
 * Move disk 2 from B to C
 * Move disk 1 from A to C
 */
