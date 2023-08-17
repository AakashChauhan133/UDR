#include <stdio.h>

int fact(int);

int main()
{
    int p, n, r;
    printf("Enter the value of n and r: \n");
    scanf("%d%d", &n, &r);

    p = fact(n)/fact(n - r);

    printf("%dP%d = %d",n, r, p);

    return 0;
}


int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return (n * fact(n - 1));

}
