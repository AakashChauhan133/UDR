/*
	Author: Aakash Chauhan
	Date: February 20, 2023

	Program: Print triples that give sum of a given number
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
		scanf("%d", &a[i]);
	
	printf("Enter the  number for triplet: ");
	scanf("%d", &number);
	
	// Preview
	printf("\nPREVIEW\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// Logic
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[i] + a[j] + a[k] == number)
				{
					printf("%d + %d + %d = %d\n", a[i], a[j] , a[k], number);
				}
			}
		}
	}					
	return 0;
}
