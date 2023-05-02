/*
    Author: Aakash Chauhan
    Date: April 13, 2023
    Problem: Print the last joined employee
*/


#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yy;
};
struct emp
{
    int id;
    struct date d;
};

int main()
{
    int n = 2;
    struct emp e[5];

    printf("Enter the data\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Joining date (dd, mm, yy): ");
        scanf("%d%d%d", &e[i].d.dd, &e[i].d.mm, &e[i].d.yy);
    }
    for (int i = 0; i < n; i++)
    {
        printf("ID: ");
        printf("%d", e[i].id);
        printf("Joining date (dd, mm, yy): ");
        printf("%d %d %d\n", e[i].d.dd, e[i].d.mm, e[i].d.yy);
    }


    int pos = 0;
    int y = e[0].d.yy, m = e[0].d.mm, d = e[0].d.dd;
    for (int i = 1; i < n; i++)
    {
        if (e[i].d.yy >= y)
        {
            y = e[i].d.yy;
            m = e[i].d.mm;
            d = e[i].d.dd;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (e[i].d.yy == y && e[i].d.mm >= m)
        {
            m = e[i].d.mm;
            d = e[i].d.dd;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (e[i].d.yy == y && e[i].d.mm == m && e[i].d.dd >= d)
        {
            d = e[i].d.dd;
            pos = i;
        }
    }

    printf("\nid%d pos%d\n", e[pos].id, pos);
    return 0;
}