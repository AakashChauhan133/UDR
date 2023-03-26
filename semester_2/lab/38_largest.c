/*
 *	Author: Aakash Chauhan
 *	Date: March 20, 2023
 *	Program: Find largest number in array using pointers
 */

#include <stdio.h>

int main()
{
	// Local decleration
	int a[10], n, max;
	int *p;
	p = a;

	// Input Section
	printf("Enter the size of aray: ");
	scanf("%d", &n);
	printf("Enter the array\n");
	for (int i = 0; i < n; i++)
		scanf("%d", p + i);

	// Logic
	max = *p;
	for (int i = 1; i < n; i++)
		max = (*(p + i) > max) ? *(p + i) : max;

	// Output Section
	printf("Maximum => %d\n", max);

	return 0;
}
