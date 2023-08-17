
/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Problem statement: Write a C program to enter a string and print the particular character which occurred the most with its frequency.
 *      Example
 *          Input String: HELLLOO
 *          Output: L 3
 */
#include <stdio.h>

int main()
{
    // Local decleration
    char s[100], freqChar;
    int i, l, trace[57] = {0}, max;

    // Input Section
    printf("/********** INPUT **********/\n");
    printf("Enter the string\n");
    l = 0;
    while (1)
    {
        scanf("%c", &s[l]);
        if (s[l] == '\n')
            break;
        l++;
    }
    s[l] = 0;

    // Logic
    // Tracing string
    for (i = 0; s[i] != 0; i++)
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            trace[s[i] - 65]++;
    max = -1;
    for (i = 0; i < 57; i++)
    {
        if (trace[i] > max)
        {
            max = trace[i];
            freqChar = i + 65;
        }
    }

    // Output Section
    printf("\n/********** OUTPUT **********/\n");
    printf("%c %d\n", freqChar, max);

    return 0;
}