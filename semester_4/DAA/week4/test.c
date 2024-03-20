#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fun(int n)
{
    int count = 0;
    int i = 0;
    int j = 1;
    while(i < n)
    {
        count++;
        i = i + j;
        j++;
    }
    printf("\ncount => %d\n", count);
}

int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
}