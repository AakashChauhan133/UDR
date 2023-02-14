/*
	Author: Aakash Chauhan
	Date: February 14, 2023

	Program: Print all prime and armstrong number in array
*/

#include <stdio.h>
#include <math.h>


int isprime(int);
int isArm(int);

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
	
	printf("\nPRIME\n");
	for (i = 0; i < n; i++)
	{
		if (isprime(nums[i]))
			printf("%d ",nums[i]);
	} 	
	printf("\nARMSTRONG\n");
	for (i = 0; i < n; i++)
	{
		if (isArm(nums[i]))
			printf("%d ",nums[i]);
	} 
	printf("\n");
	
	return 0;
}


int isprime(int nums)
{
	int flag = 1;
	if (nums == 1 || nums == 0)
	{
		return 0;
	}
	for(int i = 2; i <= nums / 2; i++)
	{
		if (!(nums % i))
		{
			flag = 0;
			break;
		}
	}
	return flag;
}


int isArm(int nums)
{
	int count = 0, temp = nums, sum = 0;
	while (temp)
	{
		count++;
		temp /= 10;
	}
	temp = nums;
	while (temp)
	{
		sum += pow(temp%10, count);
		temp /= 10;
	}
	if (nums == sum)
		return 1;
	return 0;
	
}
