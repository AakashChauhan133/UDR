/*
	Author: Aakash Chauhan
	Date: February 13, 2023

	Program: Find position of given element in given array
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int a[100], n, i, x, flag = 0;

	// Input section
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);

	printf("Enter all the elements of array\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter the number you want to search: ");
	scanf("%d", &x);

	// Preview of array
	printf("\n\nElements are: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// Logic
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			printf("postion : %d\n", i + 1);
			flag++;
		}
	}
	if (!flag)
		printf("Not found");

	return 0;
}
