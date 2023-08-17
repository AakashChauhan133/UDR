/*
    Author: Dr. Shuchi Bhadula
    Date: March 23, 2023
    Problem: Replace maximum occured char with min occured char
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int l, pos, l1;
    printf("ENTER A STRING:\n");
    gets(a);
    strcpy(b, a);
    l = strlen(a);
    l1 = l;
    int f;
    int max = 1, min = l;
    char mx, mn;
    // maximum occurance
    for (int i = 0; i < l; ++i)
    {
        f = 1;
        for (int j = i + 1; j < l; ++j)
        {
            if (a[i] == a[j])
            {
                ++f;
            }
        }
        if (f > max)
        {
            max = f;
            mx = a[i];
        }
    }
    // minimum occurance
    for (int i = 0; i < l; ++i)
    {
        f = 1;
        for (int j = i + 1; j < l; ++j)
        {
            if (a[i] == a[j])
            {
                ++f;
                for (pos = j; pos < l; pos++) // delete the element if repeated
                {
                    a[pos] = a[pos + 1];
                }
                j--;
                l--;
            }
        }
        if (f < min)
        {
            min = f;
            mn = a[i];
        }
    }

    // printf("%d  %c",max,mx);
    // printf("\n%d %c\n",min,mn);
    strcpy(a, b);

    for (int i = 0; i < l1; ++i)
    {
        if (a[i] == mx)
            a[i] = mn;
        else if (a[i] == mn)
            a[i] = mx;
        else
            continue;
    }
    puts(a);
    return 0;
}