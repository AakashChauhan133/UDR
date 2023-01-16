/*
Dec 12, 2022
Author: Aakash Chauhan
Program:	User defined fibo
*/

#include <stdio.h>

int fibR(int);

int main()
{
    int i, num, res;
    printf("Enter the value of n: ");
    scanf("%d", &num);

    printf("0\n");
    for (i = 0; i < num - 1; i++)
    {
        res = fibR(i);
        printf("%d\n", res);
    }

    return 0;
}

int fibR(int num)
{
    if (num == 1||num == 0)
        return 1;
    return (fibR(num - 1) + fibR(num - 2));
}
