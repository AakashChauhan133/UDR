#include <stdio.h>
#include <stdlib.h>

struct list
{
	int data;
	struct list *next;
};


void print_list(struct list *);


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
	
	// Output from right pointer to end
	p = r;
	while (p)
	{	
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	print_list(r);
	printf("\n");
	return 0;
}

void print_list(struct list *p)
{
	if (!p)
		return;
	print_list(p->next);
	printf("%d ", p->data); 
}
