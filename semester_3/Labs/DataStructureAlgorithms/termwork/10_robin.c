/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT
    Class Roll: 01
    Using circular linked list allocate time slots of 10ms for given processes in time sharing Environment and then print which process will be completed in how much time. 
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct list1
{
    int time;
    int process_id;
    struct list1 *next;
} list;

// Function defition
void create(list **, list **, int, int);
void process(list *);
void display(list *);

int main()
{
    // Local variable
    list *left = NULL, *right = NULL;
    int n, i, val, id;
    printf("Enter the numbers of tasks: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the total time of task %d (multiple of 10): ", i + 1);
        scanf("%d", &val);
        scanf("%d", &id);
        create(&left, &right, val, id);
    }

    // calling and output
    process(left);
}

void create(list **left, list **right, int val, int id)
{
    list *p = NULL;
    p = (list *)malloc(sizeof(list));
    if (!p)
    {
        printf("ERROR\n");
        return;
    }
    p->time = val;
    p->process_id = id;

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

void process(list *head)
{
    // each time 10ms
    list *p = head;
    list *t = head;
    int flag = 1, round = 1;
    
    while (flag)
    {
        flag = 0;
        p = head;
        // Pring time consumed in each round
        printf("Round %d\n", round++);
        do
        {
            if (p->time > 0)
            {
                printf("%d => -10\n", p->process_id);
                p->time -= 10;
                flag = 1;
            }
            p = p->next;
        } while (p != t);
    }
}

void display(list *head)
{
    // Display function in forward manner
    list *p = head;
    do
    {
        printf("%d => %d  \n", head->process_id, head->time);
        head = head->next;
    } while (head != p);
    printf("\n");
}