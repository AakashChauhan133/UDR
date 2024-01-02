/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT 
    Class Roll: 01
    Write a C program to create two single linked lists, and then write another function to subtract two numbers represented as linked list.
       List1->;   5->6->8->NULL    (First Number: 568)
       List2->:   2->3->4->NULL    (Second Number: 234)
       Output->:334
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} list;

// Function decleartion
void create(list **, list **, int);
void sub(list *, list *, list **, int, int);
void display(list *);
int main()
{
    list *list1 = NULL, *list1_last = NULL, *list2 = NULL, *list2_last = NULL, *ans = NULL;
    int n1, n2, i, val;
    printf("Enter the size of first list: ");
    scanf("%d", &n1);
    printf("Enter the size of second list: ");
    scanf("%d", &n2);

    printf("Enter the value of list 1: \n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &val);
        create(&list1, &list1_last, val);
    }
    printf("Enter the value of list 2: \n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &val);
        create(&list2, &list2_last, val);
    }

    // Function calling
    sub(list1, list2, &ans, n1, n2);

    // Output
    printf("ANS: ");
    display(ans);
    return 0;
}

void create(list **left, list **right, int val)
{
    // Function to create a linked list
    list *p = NULL;
    p = (list *)malloc(sizeof(list));
    if (!p)
    {
        printf("ERROR\n");
        return;
    }
    p->data = val;

    if (!(*left))
    {
        *left = *right = p;
    }
    else
    {
        (*right)->next = p;
        *right = p;
    }
    p->next = NULL;
}

void sub(list *l1, list *l2, list **ans, int n1, int n2)
{
    // Function to subtract l1 - l2
    // Note that value in msb in l1 must be greater than l2
    list *p = l1, *q = l2, *last = NULL;
    int i, p_index, q_index, borrow = 0;
    for (i = 0; i < n1; i++)
    {
        p = l1;
        q = l2;
        p_index = 1;
        q_index = 1;
        while (p_index < (n1 - i))
        {
            p_index++;
            p = p->next;
        }
        while (q_index < (n2 - i))
        {
            q_index++;
            q = q->next;
        }
        if (p->data > q->data)
        {
            if (borrow)
                create(ans, &last, (p->data - (borrow--) - q->data));
            else
                create(ans, &last, (p->data - q->data));
        }
        if (p->data < q->data)
        {
            if (borrow)
                create(ans, &last, (p->data - (borrow--) + 10 - q->data));
            else
                create(ans, &last, (p->data + 10 - q->data));
            borrow++;
        }
        if (p->data == q->data)
        {
            if (borrow)
                create(ans, &last, (p->data - (borrow) + 10 - q->data));
            else
                create(ans, &last, (p->data - q->data));
        }
    }
}

void display(list *left)
{
    // Print in reverse manner
    if (!left)
    {
        return;
    }
    display(left->next);
    printf("%d ", left->data);
}
