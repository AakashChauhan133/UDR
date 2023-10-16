/*
 *  Author: Aakash Chauhan
 *  Date: Aug 14, 2023
 *  Implimentation of acroman function
 *      Used as a benchmark of a compiler's ability to optimize recursion
 */

#include <stdio.h>

// Function decleration
int ack (int m, int n);

int main()
{
    // Local decleration
    int m, n;

    // Input section
    printf("Enter the numbers (m, n): ");
    scanf("%d%d", &m, &n);

    // Function calling and output
    printf("%d", ack(m, n));
}

int ack (int m, int n)
{
    // Recursive function
    /*
                    {   n + 1               ;   m = 0           }
        f(m,n) =    |   f(m-1, 1)           ;   m > 0 and n = 0 |
                    {   f(m-1,f(m, n-1))    ;   m > 0 and n > 0 }
    */          
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0 && m > 0)
    {
        return ack(m - 1, 1);
    }
    else if (m > 0 && n > 0)
    {
        return ack(m - 1, ack(m, n - 1));
    }
}