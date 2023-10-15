/*
 *  Author: Aakash Chauhan
 *  Date: Aug 3, 2023
 *  Insert node at right side of linked list
 */

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
	
	// Input in right of list until user quit
	while (ch)
	{
		p = (struct list *)malloc(sizeof(struct list));
		printf(">>> Enter the value: ");
		scanf("%d", &p->data);
		
		if (l == NULL && r == NULL)
			l = r = p;
		else
		{
			r->next = p;
			r = p; 
		}
		
		printf(">>> Do you want to continue (1, 0): ");
		scanf("%d", &ch);
		if (ch)
			continue;
		break;
	}
	
	// Output from left pointer to end
	p = l;
	while (p)
	{	
		printf("%d ", p->data);
		p = p->next;
	}
	
	return 0;
}
