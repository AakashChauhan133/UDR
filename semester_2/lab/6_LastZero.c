/*
	Author: Aakash Chauhan
	Date: February 13, 2023

	Program: Find positon of elements have zero in last
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int a[100], n, i, temp, index1 = -1, index2 = -1;

	// Input section
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);

	printf("Enter all the elements of array\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	// Preview of array
	printf("Preview\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// Logic
	for (i = 0; i < n; i++)
	{
		if (!(a[i] % 10))
		{
			printf("position: %d\n", i + 1);
		}
	}

	return 0;
}
