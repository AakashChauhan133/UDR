/*
 *  Author: Aasia Praveen
 *     Contribution: Aakash Chauhan
 *  Date: June 7, 2023
 *  Seperate in File odd and even number
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp, *fe, *fo;
    int n, x, i;
    printf("Input the limit\n");
    scanf("%d", &x);
    fp = fopen("Number.txt", "w");
    if (fp == NULL)
    {
        printf("File creation error");
        exit(0);
    }

    for (i = 0; i < x; i++)
    {
        scanf("%d", &n);
        putw(n, fp);
    }

    fclose(fp);

    fp = fopen("Number.txt", "r");
    fe = fopen("Even.txt", "w");
    fo = fopen("Odd.txt", "w");

    if (fp == NULL || fe == NULL || fo == NULL)
    {
        printf("File not found");
        exit(0);
    }

    while ((n = getw(fp)) != EOF)
    {

        if (n % 2 == 0)
        {
            putw(n, fe);
        }
        else
        {
            putw(n, fo);
        }
    }

    fclose(fp);
    fclose(fe);
    fclose(fo);

    fo = fopen("Odd.txt", "r");
    fe = fopen("Even.txt", "r");
    printf("\n\nContents of ODD file\n\n");
    while ((n = getw(fo)) != EOF)
    {
        printf("%d", n);
    }
    printf("\n\nContents of EVEN file\n\n");
    while ((n = getw(fe)) != EOF)
    {
        printf("%d", n);
    }
    fclose(fo);
    fclose(fe);
    return 0;
}