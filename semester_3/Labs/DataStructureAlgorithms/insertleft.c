#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int circularlinkedlist[MAX];
int front=-1;
int rear=-1;
void insertleft(int value)
{
    if((front==0&&rear==MAX-1)||(rear==(front-1)%(MAX-1)))
    {
        printf("linked list is full");
    }
    else if(front==-1)
    {
        front=rear=0;
        circularlinkedlist[front]=value;
    }
    else
    {
        front--;
        circularlinkedlist[front]=value;
    }
}
void display()
{
    {
        if(front==-1)
        printf("linked list is empty");
    }
    else
    {
        int i=front;
        while(i!=rear)
        {
            printf("%d",circularlinkedlist[i]);
            i=(i+1)%MAX;
        }
        printf("%d",circularlinkedlist[rear]);
    }
}
int main()
{
    insertleft(3);
    insertleft(2);
    insertleft(1);
    display();
    return 0;
}
