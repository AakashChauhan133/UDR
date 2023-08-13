/*
 *  Author: Aakash Chauhan
 *  Date: 7 Aug , 2023
 *  Return 5 values from a function add, diff, prod, div, mod of two numbers
 */

#include <stdio.h>
#define     MAX     5

void method1(float *);

int main()
{
    // Local decleration
    float ans[MAX];
    method1(ans);

    // Output
    printf("Sum = %f\n", ans[0]);
    printf("Diff = %f\n", ans[1]);
    printf("Prod = %f\n", ans[2]);
    printf("Div = %f\n", ans[3]);
    printf("Mod = %f\n", ans[4]);

    return 0;
}
void method1(float *n)
{
    // Called by refrence
    float a, b;

    printf("Enter two numbers\n");
    scanf("%f%f", &a, &b);
    printf("sum in function %f\n", a + b);
    n[0] = a + b;
    n[1] = a - b;
    n[2] = a * b;
    n[3] = a / b;
    n[4] = (int)a % (int)b;
}