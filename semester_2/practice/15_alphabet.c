/*
 *  Author: Aasia Praveen
 *     Contribution: Aakash Chauhan
 *  Date: June 9, 2023
 *  Find word in file starting with a alphabet
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp, *fp2;
    char ch, a, str[50];
    printf("Input alphabet\n");
    scanf("%c", &a);
    fp = fopen("Alphabet.txt", "w");
    if (fp == NULL)
    {
        printf("File creation error");
        exit(0);
    }

    printf("Input Text\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fputc(' ', fp);
    fclose(fp);

    fp = fopen("Alphabet.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        exit(0);
    }
    int i = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == a)
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
            puts(str);
        }
        else
        {
            while ((ch != ' ') && (ch != '\n'))
            {
                ch = fgetc(fp);
                continue;
            }
        }
    }
    fclose(fp);
    return 0;
}