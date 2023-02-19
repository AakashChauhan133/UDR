/*
	Author: Aakash Chauhan
	Date: February 14, 2023

	Program: Find third largest number in the array
		note: array can contain duplicate values
*/

#include <stdio.h>

int bubble(int[], int);
int Method2(int[], int);

int main()
{
	// Local decleration
	int nums[100], n, i;

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
	
	// This method work wehn there is no duplicate elements
	// bubble(nums, n);
	// printf("\nThird largest element is %d\n", nums[n - 3]);

	// Method 2
	printf("\nThird largest element from method 2 is %d\n\n", Method2(nums, n));

	return 0;
}

int bubble(int nums[], int numsSize)
{
	int temp;
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = 0; j < numsSize - i - 1; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
}

int Method2(int nums[], int numsSize)
{
	int max1, max2, max3;
	max1 = max2 = max3 = -1;

	for (int i = 0; i < numsSize; i++)
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

	return max3;
}
