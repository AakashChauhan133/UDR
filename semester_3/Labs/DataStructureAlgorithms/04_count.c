#include <stdio.h>
#include <stdlib.h>

struct list
{
	int data;
	struct list *next;
};

int main()
{
	// Local decleration
	struct list *l = NULL, *r = NULL, *p = NULL;
	
	int ch = 1;
		
	// Input left of list until user quit
	while (ch)
	{
		p = (struct list *)malloc(sizeof(struct list));
		printf(">>> Enter the value: ");
		scanf("%d", &p->data);
		
		if (l == NULL && r == NULL)
			l = r = p;
		else
		{
			l->next = p;
			l = p; 
		}
		
		printf(">>> Do you want to continue (1, 0): ");
		scanf("%d", &ch);
		if (ch)
			continue;
		break;
	}
	
	// Logic for counting
	ch = 0;
	p = r;
	while(p)
	{
		ch++;
		p = p->next;
	}
	printf("Count: %d\n", ch);
	
	return 0;
}
