/*
    Author: Ashmita Barthwal
        Contributed by: Aakash Chauhan
        Date: January 11, 2023
    Recursive code to reverse a number

*/

#include <stdio.h>
#include <math.h>

int rev(int, int);
void revNum(int);

int main()
{
    int n, r, temp, count = 0;

    printf("Enter the number");
    scanf("%d", &n);

    temp = n;

    // We want number of digits to get multipling factor
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    n = temp;
    // Method 1
    r = rev(n, count);
    printf("Method 1: %d\n", r);

    // Method 2
    printf("Method 1: ");
    revNum(n);
    return 0;
}
int rev(int n, int count)
{
    if (count == 1)
        return n;
    // use multiplying factor by reducing one because one place is occupied by the number itself
    else
        return ((n % 10) * pow(10, count - 1)) + (rev(n / 10, count - 1));
}

void revNum(int n)
{
    if (n % 10 == 0)
        return;
    else
    {
        printf("%d", n % 10);
        revNum(n / 10);
    }
}