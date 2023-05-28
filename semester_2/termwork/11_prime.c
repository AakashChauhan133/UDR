/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Write a program to read 20 integers in a file. Separate them into two different files prime.txt and nonprime.txt such that all prime numbers are copied in prime.txt and remaining numbers in nonprime.txt.
    Write a C program to carry out the following:
    (a) Write a paragraph in “input.txt” read the same file.
    (b) Print each word in reverse order of “input.txt”
 */

#include <stdio.h>
#include <stdlib.h>
int isprime(int);
int main()
{
    FILE *f, *fp, *fnp;
    int n, num = 20;
    f = fopen("./number.txt", "w");

    // Input Section
    printf("\n/********** Input**********/\n");
    if (!f)
    {
        printf("FILE ERROR\n");
        exit(0);
    }

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n);
        putw(n, f);
    }
    fclose(f);

    f = fopen("./number.txt", "r");
    fp = fopen("./prime.txt", "w");
    fnp = fopen("./nonprime.txt", "w");

    if (!fp || !f || !fnp)
    {
        printf("FILE ERROR\n");
        exit(0);
    }
    for (int i = 0; i < num; i++)
    {
        n = getw(f);
        if (isprime(n))
        {
            putw(n, fp);
        }
        else
        {
            putw(n, fnp);
        }
    }
    fclose(fp);
    fclose(fnp);
    fclose(f);
    printf("\n/********** OUTPUT **********/\n");
    fp = fopen("./prime.txt", "r");
    fnp = fopen("./nonprime.txt", "r");
    printf("Data in prime.txt\n");
    while ((n = getw(fp)) != EOF)
    {
        printf("%d ", n);
    }
    printf("\nData in nonprime.txt\n");
    while ((n = getw(fnp)) != EOF)
    {
        printf("%d ", n);
    }
    fclose(fp);
    fclose(fnp);
    return 0;
}

int isprime(int n)
{
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (!(n % i))
        {
            return 0;
        }
    }
    return 1;
}