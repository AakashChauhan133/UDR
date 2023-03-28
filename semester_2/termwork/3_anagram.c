/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Problem statement: Write a C program to check if the two strings entered by user are anagrams or not. Two words are Said to be anagrams if the letters of one word can be rearranged to form the other word.
 *      For example: HEART and EARTH are anagrams of each other.
 */

#include <stdio.h>

int main()
{
    // Local decleration
    char s1[100], s2[100], front;
    int i, l, l1, trace[57] = {0}, count, flag;

    // Input Section
    printf("\n/********** INPUT **********/\n");
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
    printf("Enter Second string\n");
    l1 = 0;
    while (1)
    {
        scanf("%c", &s2[l1]);
        if (s2[l1] == '\n')
            break;
        l1++;   
    }
    s2[l1] = 0;

    // Logic 
    if (l1 != l)
        flag = 0;
    else
    {
        // Traceing string
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
    }

    // Output Section
    printf("\n/********** OUTPUT **********/\n");
    if (flag)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}