/*
 *  Author: Aakash Chauhan
 *  Date: Aug 14, 2023
 *  Print one 10 to 1 using recursion
 */

#include <stdio.h>


// Function definition
void series(int);

int main()
{
    int n;
    n = 10;

    // calling
    series(n);

    return 0;
}

void series(int n)
{
    // tail recusion
    if (n == 0)
        return;
    printf("%d ", n);
    series(n - 1);
}
