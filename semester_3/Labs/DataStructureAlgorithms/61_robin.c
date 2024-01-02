#include <stdio.h>
#include <stdlib.h>
#define     MAX     10

typedef struct list1
{
    int time;
    struct list1 *next;
} list;

void create(list **, list **, int );
void process(list **);

int main()
{
    list *left = NULL, *right = NULL;
    int n, i, val;
    printf("Enter the numbers of tasks: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the total time of task %d (multiple of 10): ", i+ 1);
        scanf("%d", &val);
        create(&left, &right, val);
    }
    process(&left);

}

void create(list **left, list **right, int val)
{
    list *p = NULL;
    p = (list *)malloc(sizeof(list));
    if (!p)
    {
        printf("ERROR\n");
        return;
    }
    p->time = val;

    if (!(*left))
    {
        *left = *right = p;
    }
    else
    {
        (*right)->next = p;
        *right = p;
    }
    p->next = *left;
}

void process(list **left)
{
    list *p = *left, *q = NULL, *temp = NULL;

    while(p->next != p)
    {
        p->time -= 10;
        printf("%d ", p->time);
        if (p->temp <= 0)
        {
            if (q)
                q->next = p->next;
            temp = p;
            p = p->next;
            free(temp);
        q->next = p;
        }
        q = p;
    }

}
