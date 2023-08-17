/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Problem statement: Write a FC program using dynamic memory allocation to insert elements in an array and perform the following operation.
 * 		 Searching of an element. 
 * 		 Replace the searched elements with its cube and print the array
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Local decleration
	int *p, n, i, num;
	printf("/********** INPUT **********/\n");
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	// Dynamic memory allocation
	p = (int *)malloc(sizeof(int) * n);
	
	// Input for array
	for (i = 0; i < n; i++)
		scanf("%d", (p + i));
	
	printf("Enter the element to search: ");
	scanf("%d", &num);
	
	// Logic for searching element 
    printf("\n/********** OUTPUT **********/\n");
	for (i = 0; i < n; i++)
	{
		if (*(p + i) == num)
			printf("Position => %d\n", i + 1);
	}

	// Logic for replacing with cube of given number
	for (i = 0; i < n; i++)
	{
		if (*(p + i) == num)
			*(p + i) = num * num * num;
	}

	// Output Section
    printf("\nFinal array after cubing entered number\n");
	for (i = 0; i < n; i++)
		printf("%d ", *(p + i));
	printf("\n");
	return 0;
}