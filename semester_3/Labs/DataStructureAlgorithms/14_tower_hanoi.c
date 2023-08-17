#include <stdio.h>

void TOH(int, char, char, char);

int main()
{
    int n;
    char a = 'A', b = 'B', c = 'C';
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    TOH(n, a, b, c);
    return 0;
}

void TOH(int n, char a, char b, char c)
{
    if (n == 0)
    {
//        printf("Move %d from %c to %c\n", n, a, c);
        return;
    }
    TOH(n - 1, a, c, b);
    printf("Move %d from %c to %c\n", n, a, c);
    TOH(n - 1, b, a, c);
}
