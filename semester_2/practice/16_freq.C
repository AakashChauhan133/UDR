/*
 *  Author: Navdeep Pal
 *     Contribution: Aakash Chauhan
 *  Date: June 8, 2023
 *  Find word in file
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    int c = 0, i = 0;
    char str[10], ch, word[10];
    printf("input the Word\n");
    gets(word);
    fp = fopen("hello.txt", "w");
    if (fp == NULL)
    {
        printf("file creation error");
        exit(0);
    }
    printf("input the String\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fputc(' ', fp);
    fclose(fp);

    fp = fopen("hello.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == word[0])
        {
            i = 0;
            str[i] = ch;
            i++;
            while ((ch = fgetc(fp)) != ' ' && ch != '\n')
            {
                str[i] = ch;
                i++;
            }
            str[i] = '\0';
            if ((strcmpi(str, word)) == 0)
            {
                c = c + 1;
            }
        }
    }
    printf("freq %d", c);

    fclose(fp);

    return 0;
}