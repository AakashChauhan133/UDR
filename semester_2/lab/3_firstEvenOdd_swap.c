/*
	Author: Aakash Chauhan
	Date: February 13, 2023

	Program: Swap first even and odd in array
*/

#include <stdio.h>

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
void Method1(int a[], int n)
{
	int i, temp, index1 = -1, index2 = -1;
	printf("\nMethod 1\n");

	// Preview of array
	printf("Preview\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// Logic

	// Checking even
	for (i = 0; i < n; i++)
	{
		if (!(a[i] % 2))
		{
			index1 = i;
			break;
		}
	}

	// Checking Odd
	for (i = 0; i < n; i++)
	{
		if ((a[i] % 2))
		{
			index2 = i;
			break;
		}
	}

	temp = a[index1];
	a[index1] = a[index2];
	a[index2] = temp;

	// Output
	printf("Final elements are: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void Method2(int a[], int n)
{
	int indexO = -1, indexE = -1, i;
	printf("\nMethod 1\n");

	// Preview of array
	printf("Preview\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// Logic
	for (i = 0; i < n; i++)
	{
		if (indexE < 0 && !(a[i] % 2))
			indexE = i;
		if (indexO < 0 && (a[i] % 2))
			indexO = i;
		if (indexE >= 0 && indexO >= 0)
			break;
	}

	i = a[indexO];
	a[indexO] = a[indexE];
	a[indexE] = i;

	// Output
	printf("Final elements are: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}