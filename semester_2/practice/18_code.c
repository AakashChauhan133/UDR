/*
 *  Author: Pragya Bhatt
 *     Contribution: Aakash Chauhan
 *  Date: June 10, 2023
 *  Find 5 letter n word in file
 */

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[50], word[50], ch;
    int i, n, f = 0;
    fp = fopen("hello.txt", "w");
    printf("enter the num of words: ");
    scanf("%d", &n);
    getchar();
    printf("enter the word to search (5 letters): ");
    gets(word);
    for (i = 0; i < n; i++)
    {
        printf("enter word %d (5 letters): ", i + 1);
        fgets(str, 6, stdin);
        fputs(str, fp);
        getchar();
    }
    fclose(fp);
    fp = fopen("hello.txt", "r");
    while ((fgets(str, 6, fp)) != NULL)
    {
        if ((strcmp(word, str)) == 0)
        {
            printf("found");
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("absent");
    }
    fclose(fp);
    return 0;
}