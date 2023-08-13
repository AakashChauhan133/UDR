/*
 *  Author: Navdeep Pal
 *     Contribution: Aakash Chauhan
 *  Date: June 10, 2023
 *  Print vowel in reverse order
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    int c = 0, i = 0;
    char a[100], ch, word[10];
    fp = fopen("h.txt", "w");
    if (fp == NULL)
    {
        printf("file creation error");
        exit(0);
    }
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fputc(' ', fp);
    fclose(fp);
    fp = fopen("h.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (((ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85) || (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117)))
        {
            a[i] = ch;
            i++;
        }
    }
    a[i] = '\0';
    puts(strrev(a));
    fclose(fp);
    return 0;
}
