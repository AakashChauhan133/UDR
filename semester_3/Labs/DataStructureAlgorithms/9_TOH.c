#include <stdio.h>

void toh(int, char, char, char);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    toh(n, 'a', 'b', 'c');
}

void toh(int n, char a, char b, char c)
{
    if (n == 1)
    {
        printf("Move %d From %c to %c\n", n, a, c);
        return;
    }
    toh(n - 1, a, c, b);
    printf("Move %d From %c to %c\n", n, a, c);
    toh(n - 1, b, a, c);
}