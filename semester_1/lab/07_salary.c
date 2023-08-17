/*
Nov 6, 2022
Author: Aakash Chauhan
Program: To Calculate Net salary 
hra = 10% of basic pay
ta = 5% of basic pay
da = 15% of basic pay
*/

#include<stdio.h>
int main()
{
    float ns, bp, hra, ta, da;

    // Input
    printf("Enter your basic pay : ");
    scanf("%f", bp);

    // Logic
    hra = 0.1 * bp;
    ta = 0.05 * bp;
    da = 0.15 * bp;
    ns = bp + hra + ta + da;

    // Output
    printf("Net salary is %d", ns);

    return 0;
}