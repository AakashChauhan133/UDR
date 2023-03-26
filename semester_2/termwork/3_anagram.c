/*
    Author: Aakash Chauhan
    Date: March 22, 2023
    Problem: Write a C program to check if the two strings entered by user are anagrams or not. Two words are Said to be anagrams if the letters of one word can be rearranged to form the other word.
*/

#include <stdio.h>

int main()
{
    // Local decleration
    char s1[100], s2[100], front;
    int i, l, trace[57] = {0}, count, flag;

    // Input Section
    printf("\n/********** Input**********/\n");
    printf("Enter First String\n");
    l = 0;
    while (1)
    {
        scanf("%c", &s1[l]);
        if (s1[l] == '\n')
            break;
        l++;   
    }
    s1[l] = 0;
    printf("Enter Second\n");
    l = 0;
    while (1)
    {
        scanf("%c", &s2[l]);
        if (s2[l] == '\n')
            break;
        l++;   
    }
    s2[l] = 0;

    // Logic 
    for (i = 0; s1[i] != 0; i++)
        trace[s1[i] - 65]++;
    flag = 1;
    for(i = 0; i < l; i++)
    {
        count = 1;
        for (int j = i + 1; j < l; j++)
        {
            if (s2[i] == s2[j])
            {
                count++;
                s2[j] = s2[l - 1];
                l--, j--;
            }
        }
        if (trace[s2[i] - 65] != count)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}