/*
 *  Author: Aakash Chauhan
 *  Date: Aug 14, 2023
 *  Calculate arrangements nPr
 */

#include <stdio.h>

// Function definition
int fact(int);

int main()
{
    // Local decleration
    int p, n, r;

    // Input section
    printf("Enter the value of n and r: \n");
    scanf("%d%d", &n, &r);

    // calling
    p = fact(n)/fact(n - r);

    printf("%dP%d = %d",n, r, p);

    return 0;
}


int fact(int n)
{
    // Recursive function
    if (n == 0 || n == 1)
        return 1;
    return (n * fact(n - 1));

}
