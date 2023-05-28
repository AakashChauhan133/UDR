/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Write a C program to input a paragraph inside a file “File.txt” and count no. of characters and digits in each line and store the count in “Count.txt” file line by line
 */

#include <stdio.h>
#include <stdlib.h>
int isprime(int);
int main()
{
    FILE *f, *fp;
    char ch, str[100];
    int i = 0, c_num, c_char;
    f = fopen("./File.txt", "w");

    if (!f)
    {
        printf("FILE ERROR\n");
        exit(0);
    }

    // Input Section
    printf("\n/********** Input**********/\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, f);
    }
    fclose(f);

    f = fopen("./File.txt", "r");
    fp = fopen("./Count.txt", "w");

    if (!f || !fp)
    {
        printf("FILE ERROR\n");
        exit(0);
    }
    while ((ch = fgetc(f)) != EOF)
    {
        i = c_num = c_char = 0;
        while (ch != '\n')
        {
            str[i++] = ch;
            ch = fgetc(f);
        }
        str[i] = 0;
        for (int i = 0; str[i] != 0; i++)
        {
            if (!(str[i] >= 48 && str[i] <= 57))
                c_char += 1;
            else
                c_num += 1;
        }
        fprintf(fp, "%d %d\n", c_char, c_num);
    }
    fclose(f);
    fclose(fp);

    printf("\n/********** OUTPUT **********/\n");
    fp = fopen("./Count.txt", "r");
    printf("\nContents of count.txt\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}