/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT 
    Class Roll: 01
    Write a C program to create a single linked list then input a value V, partition it such that all nodes less than V come before nodes greater than or equal to V.
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}sl;

// Function decleration
sl * create(sl *);
sl * func(sl *);
void display(sl *);

int main()
{
    sl *head=NULL;
    head=create(head);
    head=func(head);
    display(head);
    return 0;
}
sl * create(sl *hd)
{
    // Create a list by adding nodes
    sl *p=NULL,*r=NULL;
    int ch;
    do
    {
        p=(sl *)malloc(sizeof(sl));
        printf("Enter Value :");
        scanf("%d",&(p->data));
        if(hd==NULL)
            hd=r=p;
        else
        {
            r->next=p;
            r=p;
        }
        printf("Do you want to exit(press 0) :");
        scanf("%d",&ch);
    }while(ch);
    r->next=NULL;
    return hd;
}

sl * func(sl *hd)
{
    int v;
    sl *p=hd,*q=NULL;
    printf("Enter a Value of V :");
    scanf("%d",&v);
    while(p!=NULL)
    {
        if(p->data<v&&p!=hd)
        {
            q->next=p->next;
            p->next=hd;
            hd=p;
            p=q;
        }
        q=p;
        p=p->next;
    }
    return hd;
}
void display(sl *hd)
{
    // Display in forward manner
    while(hd!=NULL)
    {
        printf("%d ",hd->data);
        hd=hd->next;
    }
    printf("\n");
}
