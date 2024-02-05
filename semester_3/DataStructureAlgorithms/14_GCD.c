/*
 *  Author: Aakash Chauhan
 *  Date: Aug 14, 2023
 *  Print greatest common divisior of two numbers
 */

#include <stdio.h>


// Function definition
int GCD(int, int);

int main()
{
    // Local decleration
    int a, b;
    
    // Input section
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    
    // calling
    printf("GCD of %d and %d is %d\n",a, b, GCD(a, b));

    return 0;
}

int GCD(int a, int b)
{
    // Tail recusion
    if (a == 0)
        return b;
    GCD(b%a, a);
}
