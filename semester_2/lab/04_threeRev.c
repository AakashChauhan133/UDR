/*
	Author: Aakash Chauhan
	Date: February 13, 2023

	Program: Reverse the elements of array
*/

#include <stdio.h>

int rev(int);

void Method1(int[], int);
void Method2(int[], int);

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

	// Methods
	Method1(a, n);
	Method2(a, n);

	return 0;
}
void Method1(int nums[], int numsSize)
{
	int i;
	printf("\nMETHOD 1\n");
	// Preview of array
	printf("Preview\n");
	for (i = 0; i < numsSize; i++)
		printf("%d ", nums[i]);
	printf("\n");

	// Logic
	for (i = 0; i < numsSize; i++)
		nums[i] = rev(nums[i]);

	// Output
	printf("\nFinal Elements are: \n");
	for (i = 0; i < numsSize; i++)
		printf("%d ", nums[i]);
	printf("\n");
}

int rev(int nums)
{
	int ans = 0;
	while (nums)
	{
		ans = (10 * ans) + nums % 10;
		nums = nums / 10;
	}
	return ans;
}

void Method2(int nums[], int numsSize)
{
	int h, o, t;
	printf("\nMETHOD 2\n");
	// Preview of array
	printf("Preview\n");
	for (int i = 0; i < numsSize; i++)
		printf("%d ", nums[i]);
	printf("\n");
	
	for (int i = 0; i < numsSize; i++)
	{
		o = nums[i] % 10;
		nums[i] /= 10;
		t = nums[i] % 10;
		h = nums[i] / 10;
		nums[i] = (o * 100) + (t * 10) + h;
	}

	// Output
	printf("\nFinal Elements are: \n");
	for (int i = 0; i < numsSize; i++)
		printf("%d ", nums[i]);
	printf("\n");
}