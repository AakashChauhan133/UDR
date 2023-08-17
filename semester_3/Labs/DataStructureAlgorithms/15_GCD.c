#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    printf("GCD of %d and %d is %d\n",a, b, GCD(a, b));

    return 0;
}

GCD(int a, int b)
{
    if (a == 0)
        return b;
    GCD(b%a, a);
}
