/*
 *	Author	:	Aakash Chauhan
 *	Date	:	Feb 2, 2024
 *	Bubble Sort
 */

#include <stdio.h>

#define MAX	10

int main()
{
	int arr[MAX], i, j, n, temp;
	
	// Input 
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	printf("Enter the elements\n"); 
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	// Logic
	for (i = 0; i < n; i++)
	{
		for (j =  0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				
			}
		}
	}
	
	// Output
	printf("\nSorted elements\n"); 
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
		
	return 0;
}
