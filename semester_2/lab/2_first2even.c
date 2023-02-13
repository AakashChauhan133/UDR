/*
	Author: Aakash Chauhan
	Date: February 13, 2023

	Program: Find position of first two even numbers then swap them
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

	for (i = 0; i < n; i++)
	{
		if (!(a[i] % 2))
		{
			printf("postion : %d\n", i + 1);
			index1 = i;
			break;
		}
	}

	for (i = i + 1; i < n; i++)
	{
		if (!(a[i] % 2))
		{
			printf("postion : %d\n", i + 1);
			index2 = i;
			break;
		}
	}
	// Swaping
	temp = a[index1];
	a[index1] = a[index2];
	a[index2] = temp;

	// Output
	printf("Elements after swaping: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}


void Method2(int a[], int n)
{
	int i, count = 0, index1 = -1, index2 = -1;
	printf("\nMethod 2\n");
		
	// Preview of array
	printf("Preview\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	for (i = 0; i < n;i++)
	{
		if (count == 2)
			break;
		if (!(a[i] % 2))
		{
			printf("postion : %d\n", i + 1);
			index2 = index1;
			index1 = i;
		}
	}

	// Swaping
	i = a[index1];
	a[index1] = a[index2];
	a[index2] = i;

	// Output
	printf("Elements after swaping: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}