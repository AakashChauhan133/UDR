/*
    Author: Aakash Chauhan
    Date: April 16, 2023
    Problem: Print the last joined employee
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n = 100;
    char s[100];
    char M, m;
    gets(s);
    int l = strlen(s), c;
    int max = 0, min = l; 
    for (int i = 0; s[i] != 0; i++)
    {
        c = 0; 
        for (int j = 0; j < l; j++)
        {
            if (s[i] == s[j])
                c++;
        }
        if (c > max)
        {
            max = c;
            M = s[i];
        }
        if (c < min)
        {
            min = c;
            m = s[i];
        }
    }

    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] == M)
            s[i] = m;
        else if(s[i] == m)
            s[i] = M;
    }
    puts(s);    

    return 0;
}