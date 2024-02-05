#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int data;
    struct queue *next;
}queue;
queue* enqueue(queue *);
queue* dequeue(queue *);
void display (queue *);
int main()
{
    queue *f=NULL,*r=NULL;
    char c;
    int ch;
    do
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n");
        printf("input your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case  1:
                r=enqueue(r);
                if(f==NULL)
                    f=r;
                break;
            case  2:
                printf("ok");
                f=dequeue(f);
                if(f==NULL)
                    r=NULL;
                break;
            case  3:
                display(f);
                break;
            default :
                printf("enter a valid choice");
        }
        printf("\n\ndo you want to continue enter Y or N:");
        scanf(" %c",&c);

    }while(c=='Y'||c=='y');
    return 0;
}
queue* enqueue(queue *r)
{
    queue* p=NULL;
    int value;
    p=(queue*)malloc(sizeof(queue));
    if(p==NULL)
        printf("memory not located.\n");
    else
    {
        printf("enter data:");
        scanf("%d",&value);
        p->data=value;
        if(r==NULL)
            r=p;
        else
        {
            r->next=p;
            r=p;
        }
        r->next=NULL;
    }
    return r;
}
queue* dequeue(queue *f)
{
    queue* p=NULL;
    if(f==NULL)
        printf("queue is empty");
    else
    {
        p=f;
        printf("dequeued element:%d",f->data);
        if(f==r)
            f==NULL;
        else
            f=f->next;
        free(p );
    }
    return f;
}
void display( queue *f)
{
    while(f!=NULL)
    {
        printf("%d\t",f->data);
        f=f->next;
    }
}
