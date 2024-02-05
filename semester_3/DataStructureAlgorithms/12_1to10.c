/*
 *  Author: Aakash Chauhan
 *  Date: Aug 14, 2023
 *  Print one 1 to 10 using recursion
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
    series(n - 1);
    printf("%d ", n);
}
