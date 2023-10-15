#include <stdio.h>

#define     MAX     10

int roman(char []);
int insert(char []);
//void disp(char []);

int main()
{
    char rom[MAX];
    insert(rom);
//    disp(rom);


    return 0;
}

int insert(char s[])
{
    int i = 0;
    printf("Enter roman number: ");
    while (1)
    {
        scanf("%c", &s[i]);
        if (s[i] == "\n")
            break;f
        i++;
    }
    s[i] = 0;
    return i;
}

//void disp(char s[])
//{
//    int i;
//    for(i = 0; s[i] != 0; i++)
//        printf("%c", s[i]);
//
//}
