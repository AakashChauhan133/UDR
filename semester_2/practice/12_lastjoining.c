/*
 *  Author: Aakash Chauhan
 *  Date: May 7, 2023
 *  Last joining in the compnay
 */
#include <stdio.h>

struct date
{
    int dd;
    int mm;
    int yyyy;
};

struct emp
{
    char name[100];
    struct date;
};

int main()
{
    struct emp e[10];
    int n = 3;
    struct date curr = {07, 05, 2023};

    for (int i = 0; i < n; i++)
    {
        printf("Enter the date for emp %d in format dd mm yyyy: ", i + 1);
        scanf("%d%d%d", &e[i].dd, &e[i].mm, &e[i].yyyy);
        getchar();
        printf("Enter the name of employee %d: ", i + 1);
        gets(e[i].name);
    }

    int min = 365*100, id = -1;
    for (int i = 0; i < n; i++)
    {
        // There is another complex method to do this for easy approch convert everything to days
        // considering month of 30 days and no leap year
        e[i].dd = (curr.dd - e[i].dd < 0) ? (e[i].mm--, 30 + curr.dd - e[i].dd) : curr.dd - e[i].dd;
        e[i].mm = (curr.mm - e[i].mm < 0) ? (e[i].yyyy++, 12 + curr.mm - e[i].mm) : curr.mm - e[i].mm;
        e[i].yyyy = curr.yyyy - e[i].yyyy;
        e[i].yyyy = e[i].yyyy * 365;
        e[i].mm = e[i].mm * 30;
        e[i].dd = e[i].dd + e[i].mm + e[i].yyyy;
        if (e[i].dd < min)
        {
            id = i;
            min = e[i].dd;
        }
    }
    printf("Last joining: %s", e[id].name);

    return 0;
}