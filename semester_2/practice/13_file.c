/*
 *  Author: Aasia Praveen
 *     Contribution: Aakash Chauhan
 *  Date: June 3, 2023
 *  Last joining in the compnay
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("Display.txt", "w");
    if (fp == NULL)
    {
        printf("File creation error");
        exit(0);
    }

    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }

    fclose(fp);

    fp = fopen("Display.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        exit(0);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    return 0;
    fclose(fp);
}