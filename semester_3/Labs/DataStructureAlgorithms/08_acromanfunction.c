#include <stdio.h>

int ack (int m, int n);
int main()
{
    int m, n;
    printf("Enter the numbers (m, n): ");
    scanf("%d%d", &m, &n);

    printf("%d", ack(m, n));
}

int ack (int m, int n)
{
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