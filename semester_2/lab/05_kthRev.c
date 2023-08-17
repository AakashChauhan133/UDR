/*
	Author: Aakash Chauhan
	Date: February 13, 2023

	Program: Reverse the elements of array
*/


#include<stdio.h>

int rev(int);

int main()
{
	// Local decleration
	int a[100], n, i;
	
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
		a[i] = rev(a[i]);
	
	// Output
	printf("\nFinal Elements are: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	
	return 0;
}

int rev(int nums)
{
	int ans = 0;
	while(nums)
	{
		ans = (10 * ans) + nums % 10;
		nums = nums / 10;
	}
	return ans;
}
