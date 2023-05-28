/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Write a C program to carry out the following:
    (a) Write a paragraph in “input.txt” read the same file.
    (b) Print each word in reverse order of “input.txt”
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char ch, str[100];
    int i = 0;
    fp = fopen("./input.txt", "w");

    if (!fp)
    {
        printf("FILR ERROR\n");
        exit(0);
    }

    // Input Section
    printf("\n/********** Input**********/\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fputc(32, fp);
    fclose(fp);

    fp = fopen("./input.txt", "r");

    if (!fp)
    {
        printf("FILR ERROR\n");
        exit(0);
    }

    printf("\n/********** OUTPUT **********/\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        i = 0;
        while (ch != 32 && ch != '\n')
        {
            str[i++] = ch;
            ch = fgetc(fp);
        }
        str[i] = 0;
        strrev(str);
        printf("%s ", str);
    }
    fclose(fp);
    return 0;
}
