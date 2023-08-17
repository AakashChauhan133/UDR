/*
	Author: Aakash Chauhan
	Date: February 13, 2023

	Program: Find first two prime numbers in given array
*/

#include <stdio.h>

int isprime(int);
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

	// Method
	Method1(a, n);
	Method2(a, n);

	return 0;
}

void Method1(int a[], int n)
{
	int i;
	printf("\nMethod 1\n");

	// Preview of array
	printf("Preview\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// Logic
	for (i = 0; i < n; i++)
	{
		if (isprime(a[i]))
		{
			printf("postion : %d\n", i + 1);
			break;
		}
	}

	for (i = i + 1; i < n; i++)
	{
		if (isprime(a[i]))
		{
			printf("postion : %d\n", i + 1);
			break;
		}
	}
}

void Method2(int a[], int n)
{
	int i, count = 2;
	printf("\nMethod 1\n");

	// Preview of array
	printf("Preview\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// Logic
	for (i = 0; i < n; i++)
	{
		if (count && isprime(a[i]))
		{
			printf("postion : %d\n", i + 1);
			count--;
		}
	}
}

int isprime(int nums)
{
	int flag = 1;
	if (nums == 1 || nums == 0)
	{
		return 0;
	}
	for (int i = 2; i <= nums / 2; i++)
	{
		if (!(nums % i))
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
