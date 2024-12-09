/*
 * Tower of Hanoi Problem
 *
 * Description:
 * The Tower of Hanoi puzzle involves three rods (A, B, C) and n disks of different sizes, 
 * initially stacked on rod A in decreasing size. The goal is to move all disks from rod A 
 * to rod C, following these rules:
 * - Only one disk can be moved at a time.
 * - A larger disk cannot be placed on top of a smaller disk.
 * - A disk can only be moved if it is the topmost disk on a rod.
 *
 * Recursive Solution:
 * To move n disks from rod A to rod C using rod B:
 * 1. Move the top n-1 disks from rod A to rod B (using rod C as a helper).
 * 2. Move the nth (largest) disk directly from rod A to rod C.
 * 3. Move the n-1 disks from rod B to rod C (using rod A as a helper).
 *
 * Base Case:
 * If there is only 1 disk, simply move it from rod A to rod C.
 *
 * Number of Moves:
 * The total number of moves required for n disks is 2^n - 1.
 *
 * Time Complexity:
 * O(2^n) - Exponential growth with the number of disks.
 *
 * Space Complexity:
 * O(n) - Due to the recursive call stack.
 *
 * Example:
 * For n = 3:
 * - Move disk 1 from A to C.
 * - Move disk 2 from A to B.
 * - Move disk 1 from C to B.
 * - Move disk 3 from A to C.
 * - Move disk 1 from B to A.
 * - Move disk 2 from B to C.
 * - Move disk 1 from A to C.
 *
 * Program Objective:
 * This program uses recursion to solve the Tower of Hanoi problem and prints the steps 
 * to move all disks from the source rod to the destination rod.
 */

#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {  // Base case
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    // Recursive case
    towerOfHanoi(n - 1, source, auxiliary, destination);  // Step 1
    printf("Move disk %d from %c to %c\n", n, source, destination); // Step 2
    towerOfHanoi(n - 1, auxiliary, destination, source);  // Step 3
}

int main() {
    int n; // Number of disks

    // Input: Number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Output: Steps to solve Tower of Hanoi
    printf("Steps to solve Tower of Hanoi for %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B'); // Solve the problem

    return 0;
}
// The output of the above program is shown as below:
/*
use case -1:

Enter the number of disks: 1
Steps to solve Tower of Hanoi for 1 disks:
Move disk 1 from A to C

use case 2:

nter the number of disks: 2
Steps to solve Tower of Hanoi for 2 disks:
Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C

use case 3

Enter the number of disks: 3
Steps to solve Tower of Hanoi for 3 disks:
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C

*/