/*
	Author: Aakash Chauhan
	Date: February 14, 2023

	Program: Find third largest number in the array
		note: array can contain duplicate values
*/

#include <stdio.h>

int main()
{
	// Local decleration
	int nums[100], n, i, max1, max2, max3;

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
	
	max1 = max2 = max3 = -128;
	for (i = 0; i < n; i++)
	{
		if (nums[i] > max1 && max1 != nums[i])
		{
			max3 = max2;
			max2 = max1;
			max1 = nums[i];
		}
		else if (nums[i] > max2 && max1 != nums[i] && max2 != nums[i])
		{
			max3 = max2;
			max2 = nums[i];
		}
		else if(nums[i] > max3 && max1 != nums[i] && max2 != nums[i] && max3 != nums[i])
		{
			max3 = nums[i];
		}
	}
	printf("\nThird largest element from method 2 is %d\n\n", max3);

	return 0;
}

