/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Write a C program to read a text file named as “Data.txt”, Create an another file named as “Del.txt” deleting the words “a”, “the”, “an” from the file “Data.txt” and replacing each one of them with a blank space in “Del.txt”.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp, *fp1;
    char ch, str[50];
    int i = 0;
    fp = fopen("./Data.txt", "w");
    if (!fp)
    {
        printf("FILE ERROR\n");
        exit(0);
    }

    // Input Section
    printf("\n/********** INPUT **********/\n");
    printf("Enter the Data int Data.txt\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fputc(32, fp);
    fclose(fp);
    fp1 = fopen("./Del.txt", "w");
    fp = fopen("./Data.txt", "r");
    if (!fp && !fp1)
    {
        printf("FILE ERROR\n");
        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        i = 0;
        while (ch != 32 && ch != '\n')
        {
            str[i++] = ch;
            ch = fgetc(fp);
        }
        str[i] = 0;
        if (!strcmp(str, "the") || !strcmp(str, "a") || !strcmp(str, "an"))
        {
            fputs(" ", fp1);
        }
        else
        {
            fputs(str, fp1);
        }
        fputc(ch, fp1);
    }
    fclose(fp1);
    fclose(fp);


    printf("\n/********** OUTPUT **********/\n");
    fp1 = fopen("./Del.txt", "r");
    while ((ch = fgetc(fp1)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp1);
    return 0;
}