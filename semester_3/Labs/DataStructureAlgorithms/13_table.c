#include <stdio.h>

void table(int);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    table(n);

    return 0;
}

void table(int n)
{
    static int val = 1;
    if (val == 11)
        return;
    printf("%d * %d = %d\n", val, n, val * n);
    val++;
    table(n);
}
