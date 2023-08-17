/*
    Name: Aakash
    University Roll No: 2021931
    Section: M

    Problem statement: WAP to find roots of a quadratic equation, equation is of the form (ax**2+bx+c=0)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Local Decleration
    float a, b, c, d, root1, root2;

    // Input from user
    printf("********** INPUT **********\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");

    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    // Logic Using Quadratic Formula

    // Checking Discriminent
    d = (b * b) - (4 * a * c);

    printf("********** OUTPUT **********\n");
    if (d >= 0)
    {
        root1 = ((-b) + sqrt(d)) / (2 * a);
        root2 = ((-b) - sqrt(d)) / (2 * a);
        printf("First Root: %f\nSecond Root: %f\n\n", root1, root2);
    }
    else
    {
        printf("IMAGINARY ROOTS\n");
    }
    return 0;
}
