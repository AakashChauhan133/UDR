/*
 *  Author: Aakash Chauhan
 *  Date: Aug 14, 2023
 *  Tower of Hannoi problem
 */

#include <stdio.h>

// Function definition
void toh(int, char, char, char);

int main()
{
    // Local decleration
    int n;

    // Input section
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // calling
    toh(n, 'a', 'b', 'c');
}


void toh(int n, char a, char b, char c)
{
    // Recursive function for tower of hannoi (binary recursion)
    /*
        Number of moves = 2^n - 1
        Visual Understanding
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        number of disk = 1
            |               |               |
            |               |               |
            |               |               |
           ++++             |               |
        ==========     ===========     ===========
            A               B               C
            V                               ^
            |                               |
            |_______________________________|
        Move A to C
        
            |               |               |
            |               |               |
            |               |               |
            |               |             +++++               
        ==========     ===========     ===========
            A               B               C
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        number of disk = 2
            |               |               |
           +++              |               |
            |               |               |
          ++++++            |               |
        ==========     ===========     ===========
            A               B               C
        Move A to B
            |               |               |
            |               |               |
            |               |               |
          ++++++           +++              |
        ==========     ===========     ===========
            A               B               C
        Move A to C
            |               |               |
            |               |               |
            |               |               |
            |              +++            ++++++
        ==========     ===========     ===========
            A               B               C
        Move B to C
            |               |               |
            |               |              +++
            |               |               |
            |               |            ++++++
        ==========     ===========     ===========
            A               B               C
        Number of moves = 4 -1 = 3

        Assume that we can only move first to third as this is the only solution to move one disk
        then this will look like
        Tower order:        ABC
        swap(first, third)  ACB => apply toh to solve one disk A to B
        apply toh to solve one disk A to C
        swap(first, sec)    BAC => apply toh to solve one disk B to C
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        number of disk = 4
        steps = 16 - 1 = 15
        Now break this in terms of two disk 
            +               |               |
           +++              |               |
          +++++             |               |
         +++++++            |               |
        =========       ==========      =========
        treat first three as one and bigger as one
        then these 3 treat top two as one and bigger as one
        trear top two as one last as one
        and so on ...
            |                |              |
            |                +              |
            |               +++             |
         +++++++           +++++            |
        =========       ==========      =========
            |                |              |
            |                +              |
            |               +++             |
            |              +++++         +++++++
        =========       ==========      =========
            |                |              *
            |                |             +++
            |                |            +++++   
            |                |           +++++++
        =========       ==========      =========
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    */
    if (n == 0)
    {
        return;
    }
    // call (swap last 2)
    toh(n - 1, a, c, b);
    // print move first to third
    printf("Move %d From %c to %c\n", n, a, c);
    // call swap first two
    toh(n - 1, b, a, c);
}