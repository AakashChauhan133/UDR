/*
	Author: Aakash Chauhan
	Date: February 14, 2023

	Program: Seperate odd and even number in different array
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int nums[100], odds[100], evens[100], n, i, e, o;
	
	// Input Section
	printf("Enter the numbers of elements of array: ");
	scanf("%d", &n);
	
	printf("Enter all the elements\n");
	for (i = 0; i < n; i++)
		scanf("%d", &nums[i]);
	
	// Preview of array
	printf("\nELEMENTS\n");
	for (i = 0; i < n; i++)
		printf("%d ", nums[i]);
	printf("\n");
	
	// Logic
	o = e = 0;
	for (i = 0; i < n; i++)
	{
		if (nums[i] % 2)
			odds[o++] = nums[i];
		else
			evens[e++] = nums[i];
	}
	
	// Output Section
	printf("\nODD ARRAY\n");
	for (i = 0; i < o; i++)
		printf("%d ", odds[i]);
	printf("\n");
		printf("\nEVEN ARRAY\n");
	for (i = 0; i < e; i++)
		printf("%d ", evens[i]);
	printf("\n");
	
	return 0;
	
}
