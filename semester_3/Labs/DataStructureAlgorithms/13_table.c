/*
 *  Author: Aakash Chauhan
 *  Date: Aug 14, 2023
 *  Print table using recusion
 */

#include <stdio.h>

// Function definition
void table(int);

int main()
{
    // Local decleration
    int n;
    
    // Input section
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // calling
    table(n);

    return 0;
}

void table(int n)
{
    // Tail recusion to print table
    static int val = 1;
    if (val == 11)
        return;
    printf("%d * %d = %d\n", val, n, val * n);
    val++;
    table(n);
}
