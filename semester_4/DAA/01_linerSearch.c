/*
 *	Author	:	Aakash Chauhan
 *	Date	:	Feb 2, 2024
 *	Count the numbers of comparison to find key in linear search
 */

#include <stdio.h>

#define MAX	10

int main()
{
	int arr[MAX], i, key, count, n, f = 1;
	
	
	// Input 
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	printf("Enter the elements\n"); 
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the key to search: "); 
	scanf("%d", &key);
	
	// Logic
	count = 0;
	for(i = 0; i < n; i++)
	{
		count++;
		if (key == arr[i])
		{
			f = 0;
			printf("Count of comparison= %d\n", count);
			break;
		} 
	}
	if (f)
	{
		printf("Not found\n");
	}

	return 0;
}
