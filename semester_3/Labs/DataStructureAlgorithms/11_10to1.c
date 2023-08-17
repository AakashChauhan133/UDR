#include <stdio.h>

void series(int);

int main()
{
    int n;
    n = 10;

    series(n);

    return 0;
}

void series(int n)
{
    if (n == 0)
        return;
    printf("%d ", n);
    series(n - 1);

}
