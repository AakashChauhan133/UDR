/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Problem statement: Write a C program that takes your full name (First, middle and last) as input and displays the abbreviations of the first and middle names except the last name which is displayed as it is.
 */

#include <stdio.h>

int main()
{
    // Local decleration
    char s[100], front;
    int i, l;

    // Input Section
    printf("\n/********** Input**********/\n");
    printf("Enter Name\n");
    l = 0;
    while (1)
    {
        scanf("%c", &s[l]);
        if (s[l] == '\n')
            break;
        l++;
    }
    s[l] = 0;

    // Logic and Output Section
    printf("\n/********** OUTPUT **********/\n");
    for (i = 0; s[i] != 0; i++)
        if (s[i] != 32)
        {
            l = i;
            front = s[l];
            break;
        }
    for (i; s[i] != 0; i++)
    {
        if (s[i] == 32 && s[i + 1] != 32 && s[i + 1] != '\0')
        {
            printf("%c. ", front);
            l = i + 1;
            front = s[l];
        }
    }
    for (i = l; s[i] != 0; i++)
        printf("%c", s[i]);
    printf("\n");

    return 0;
}
