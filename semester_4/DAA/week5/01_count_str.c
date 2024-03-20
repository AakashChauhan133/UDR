#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char str[100] = {0};

    int map[26] = {0};
    int max = 0;
    int indx = 0;

    printf("Enter the string: ");
    gets(str);

    for (int i = 0; str[i] != 0 ; i++)
        map[str[i] - 97]++;
    
    for (int i = 0; i < 26; i++)
    {
        if (map[i] > max)
        {
            max = map[i];
            indx = i;
        }
    }

    printf("%c - %d\n", indx + 97, max);


    return 0;
}