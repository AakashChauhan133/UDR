/*
    Author: Aakash Chauhan
    Date: March 16, 2023
    Problem: Reverse the letter each word of a string
        Input: This is a pen
        Output: sihT si a nep
    Note: Enter a valid string
*/

#include <stdio.h>
void rev(char[], int, int);
int main()
{
    // Local declration
    char s[100];
    int i, j;
    // Input Section
    printf("Enter the string\n");
    gets(s);

    // Logic
    j = 0;
    for (i = 1; s[i - 1] != '\0'; i++)
    {
        if ((s[i] == 32 && s[i - 1] && 32) || s[i] == '\0')
        {
            rev(s, j, i - 1);
            j = i + 1;
        }
    }

    // Output Section
    puts(s);
    return 0;
}

void rev(char s[], int i, int j)
{
    char temp;
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++, j--;
    }
}