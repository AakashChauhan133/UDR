/*
	Author: Aakash Chauhan
	Date: February 20, 2023

	Program: Print the first number in array that is smaller than its adjecent numbers (ie. smaller than its left and right numbers)
*/

#include <stdio.h>
int main()
{
	// Local decleration		
	int a[20], n, i, number;
	
	//Input
	printf("Enter the  size of array: ");
	scanf("%d", &n);
	printf("Enter all the elements\n");
	for (i = 0; i < n; i++)
		scanf("%d ", &a[i]);
	
	// Preview
	printf("\nPREVIEW\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
		
	printf("\n");
	// Logic
	for (i = 1; i < n - 1; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
		{
			printf("The number smaller than adjecent number is %d\n", a[i]);
			break;
		}
	}
	return 0;
}	
