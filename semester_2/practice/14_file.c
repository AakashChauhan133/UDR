/*
 *  Author: Aasia Praveen
 *     Contribution: Aakash Chauhan
 *  Date: June 4, 2023
 *  Last joining in the compnay
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch, str[30], s[20];
    printf("Input a string\n");
    scanf("%s", s);
    printf("Input a text\n");
    fp = fopen("Ocurr.txt", "w");
    if (fp == NULL)
    {
        printf("File creation error");
        exit(0);
    }

    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fputc(' ', fp);
    fclose(fp);

    fp = fopen("Ocurr.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        exit(0);
    }
    int i = 0, c = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        i = 0;  // set i = 0
        while ((ch != ' ') && (ch != '\n'))
        {
            str[i] = ch;
            ch = fgetc(fp);     // move ch insde the loop to prevnt unnessesry movement 
            i++;
        }
        str[i] = '\0';

        if ((strcmpi(str, s) == 0))
        {
            c = c + 1;
        }
    }
    printf("%s occur %d times", s, c);

    fclose(fp);
}