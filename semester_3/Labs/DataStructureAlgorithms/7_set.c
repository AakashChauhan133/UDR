#include <stdio.h>

#define     MAX     10

void insert(int *, int *n);
void disp(int *, int);
void intersection(int *, int *, int, int);
void unions(int *, int *, int, int);
void unions(int *, int *, int, int);
void removedup(int *, int *);

int main()
{
    int set1[MAX], set2[MAX];
    int n1, n2;

    insert(set1, &n1);
    insert(set2, &n2);
//    intersection(set1, set2, n1, n2);
    unions(set1, set2, n1, n2);
//    removedup(set1, &n1);

//    disp(set1, n1);
}
void insert(int *a, int *n)
{
    int i;
    printf("Enter the size of set: ");
    scanf("%d", &i);
    *n = i;
    for (i = 0; i < *n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &a[i]);
    }
}

void disp(int *a, int n)
{
    int i;
    printf("Set is: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void intersection(int *set1, int *set2, int n1, int n2)
{
    int set[MAX], x = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            if (set1[i] == set2[j])
                set[x++] = set1[i];
    }
    disp(set, x);
}

void unions(int *set1, int *set2, int n, int m)
{
    int i, set[2 * MAX], x = 0;
    for (i = 0; i < n; i++)
    {
        set[x++] = set1[i];
    }
    for (i = 0; i < m; i++)
    {
        set[x++] = set2[i];
    }
    removedup(set, &x);
    disp(set, x);
}

void removedup(int *set, int *n)
{

    for (int i = 0; i < *n; i++)
    {
        for (int j = i + 1; j < *n; j++)
            if (set[i] == set[j])
            {
                int temp = set[i];
                set[i] = set[*n -1];
                set[*n - 1] = temp;
                (*n)--;
                j--;
            }
    }
}

