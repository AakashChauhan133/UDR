/*
    Author: Aakash Chauhan
    Date: March 16, 2023
    Problem: Replace the max occoured char with min ocuured char
*/
#include <stdio.h>

int main()
{
    // Local decleration
    char s[100] , max = -1, min = 125;
    int temp[150] = {0}, maxi, mini;
    int i;

    // Input Section
    printf("Enter the srting\n");
    gets(s);

    // Logic
    for (i = 0; s[i] != '\0'; i++)
        temp[s[i]]++;
    for (i = 0; i < 149; i++)
    {
        if (max < temp[i])
        {
            max = temp[i];
            maxi = i;
        }  
        if (min > temp[i] && temp[i] != 0)
        {
            min = temp[i];
            mini = i;
        }
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == maxi)
            s[i] = mini;
        else if (s[i] == mini)
            s[i] = maxi;
    }


    // Output
    puts(s);

    return 0;
}