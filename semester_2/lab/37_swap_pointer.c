/*
	Author: Aakash Chauhan
	Date: March 20, 2023
	Program: Swap Two numbers using pointers
*/

#include <stdio.h>

void swap(int *, int*);
int main()
{
	// Local Decleration
	int x, y;
	
	// Input Section
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter x: ");
	scanf("%d", &y);
	
	swap(&x, &y);
	printf("x => %d\ny => %d\n", x, y);	
	
	return 0;
}

void swap(int *p, int*q)
{
		// Logic
	int temp = *p;
	*p = *q;
	*q = temp;
	
}
