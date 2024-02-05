/*
 *  Author  :   Aakash Chauhan
 *  Date    :   September 17, 2023
 *  Assuming that you have a single linked list pointer B or PTR pointing to the first node of the linked list
        •	Count total number of nodes in the linked list
        •	Count total number of nodes having even information
        •	Count total number of nodes having odd information
        •	Insert a new node before the first node of the linked list
        •	Insert a new node after the first node
        •	Insert a new node after the last node
        •	Insert a new node before the last node
        •	Insert a new node after the node given by the user in the middle of the linked list
        •	Delete first node of the linked list
        •	Delete last node of the linked list
        •	Delete any node between the first and last node in the linked list
 */
#include <stdio.h>
#include <stdlib.h>

// Node discription
// +------------+-----------+
// |    DATA    |   *next   |
// +------------+-----------+
typedef struct SingleList
{
    int data;
    struct SingleList *next;
} list;

// Function decleration
int count(list *);
int count_even(list *);
int count_odd(list *);
list * in_first(list *);
// list * in_after(list *);
list * in_last(list *);
// in_before
// insert
// del_first
// del_last
// delete
void display(list *);

int main()
{
    // Local dec.
    list *head = NULL, *tail = NULL;
    int ch;
    ch = 1;

    while (ch)
    {
        printf("***************** MENU *****************\n");
        printf("[0]     exit\n");
        printf("[1]     count\n");
        printf("[2]     count even\n");
        printf("[3]     count odd\n");
        printf("[4]     insert before first node\n");
        printf("[5]     insert after first node\n");
        printf("[6]     insert after last node\n");
        printf("[7]     insert before last node\n");
        printf("[8]     insert at given position\n");
        printf("[9]     delete first node\n");
        printf("[10]    delete last node\n");
        printf("[11]    delete node at given position\n");
        printf("[12]    display\n");

        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Count = %d\n", count(head));
            break;
        case 2:
            printf("Count even = %d\n", count_even(head));
            break;
        case 3:
            printf("Count odd = %d\n", count_odd(head));
            break;
        case 4:
            head = in_first(head);
            if (!tail)
                tail = head;
            break;
        case 5:
            break;
        case 6:
            tail = in_first(tail);
            if (!head)
                head = tail;
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            display(head);
            break;
        default:
            printf("INVALID\n");
            break;
        }
    }
    return 0;
}

int count(list *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

int count_even(list *head)
{
    int count = 0;
    while (head)
    {
        if ((head->data % 2))
            count++;
        head = head->next;
    }
    return count;
}
int count_odd(list *head)
{
    int count = 0;
    while (head)
    {
        if (!(head->data % 2))
            count++;
        head = head->next;
    }
    return count;
}
list *in_first(list *head)
{
    list *p = NULL;
    p = (list *)malloc(sizeof(list));
    if (!p)
        return head;
    printf("Enter the data: ");
    scanf("%d", &(p->data));

    p->next = head;
    head = p;
    return head;
}


list * in_last(list * tail)
{
    list *p = NULL;
    p = (list *)malloc(sizeof(list));
    if (!p)
        return tail;
    printf("Enter the data: ");
    scanf("%d", &(p->data));

    if (tail)
    {
        tail->next = p;
    }
    tail = p;
    p->next = NULL;
    return tail;

}

void display(list *head)
{
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
