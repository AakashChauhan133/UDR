#include<stdio.h>
#include<stdlib.h>
#define   MAX   3

int enq(int[],int);
int deq(int[],int);
void disp(int[],int,int);
void peek(int[],int);

int main()
{
	int q[MAX],front =-1,rear =-1;
	int ch;
	do
	{
		printf("*****MENU*****\n");
		printf("1.Enqueue \n2.Dequeue \n3.Display \n4.Peek \n5.Exit\n");
		printf("Input your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			rear=enq(q,rear);
			if (front == -1)
			front == 0;
			break;

			case 2:
			front=deq(q,front);
			if(front > rear)
			front = rear = -1;
			break;

			case 3:
			disp(q,front,rear);
			break;

			case 4:
			peek(q,front);
			break;

			case 5:
			exit(1);
			break;

			default :
			printf("Inavlid choice\n");
break;
			
		}
printf("\nf%d r%d\n", front, rear);
	}
	while(1);
return 0;
}


int enq(int q[], int rear)
{
	int x;
	if(rear == MAX-1)
	{
		printf("Queue overflow\n");
	}
	else
	{	printf("Input an element to the queue\n");
		scanf("%d",&x);
		rear=rear+1;
		q[rear]=x;
	}
	return rear;
}

int deq(int q[],int front)
{
	if(front==-1)
	{
		printf("Queue is empty \n");
		
	}
	else
	{	
		printf("%d \n",q[front]);
		front++ ;
	}
		

	return front;
}

void disp(int q[],int front , int rear)
{
	int i;
	if(front==-1)
	printf("Queue is empty \n");
	else
	{
		for(i=front; i<=rear ;i++)
		{
			printf("\nval %d ",q[i]);
		}
	}
}

void peek(int q[] , int front)
{
	if(front==-1)
	printf("Queue is empty \n");
	else
	printf("%d",q[front]);
}



