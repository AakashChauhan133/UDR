/*
    Author: Aakash Chauhan
    Date: March 22, 2023
    Problem: Write a C program to enter a string and print the particular character which occurred the most with its frequency.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    char s[100], freqChar;
    int i, l, trace[57] = {0}, max;

    // Input Section
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
    printf("\n%c %d\n", freqChar, max);
    return 0;
}