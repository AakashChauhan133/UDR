/*
    Author: Aakash Chauhan
    Date: January 8, 2023
    Problem: Program demonstrates how to get the length of a C array using the sizeof operator; (Output: int array has 20 bytes and 5 elements or char array has 4 bytes and 4 elements)
*/

#include <stdio.h>

int main()
{
    // Local Decleration
    int a[20], numsSize;

    // Logic
    /*
        let say an array have n elements
        say size of int is 4 bytes so size of array (n * 4)bytes
    */
    numsSize = sizeof(a)/sizeof(int);

    // Output Section
    printf("%d", numsSize);

    return 0;
}
