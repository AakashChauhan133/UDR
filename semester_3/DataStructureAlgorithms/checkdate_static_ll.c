/*
 *  Author: Aakash Chauhan
 *  Date: Aug 28, 2023
 *  Satatic linked list (only 3 nodes)
 */

#include <stdio.h>

struct list
{
	int data;
	struct list *next;
};

int main()
{
	// Local decleration
	struct list a , b, c, *p;
	
	// Input Section
	printf("Enter the value in a : ");
	scanf("%d", &a.data);
	printf("Enter the value in b : ");
	scanf("%d", &b.data);
	printf("Enter the value in c : ");
	scanf("%d", &c.data);
	
	// Linking the structures
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	
	
	// Output using pointer p
	p = &a;
	
	while(p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	
	return 0;
}
