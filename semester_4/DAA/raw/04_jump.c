/*
 *	Author	:	Aakash Chauhan
 *	Date	:	Feb 2, 2024
 *	Count the numbers of comparison to find key in binary search
 */

#include <stdio.h>
#include <math.h>

#define MAX	10

int main()
{
	int arr[MAX], i, key, index, n, f = 1;
	
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
	
	i = index = 0;
	for (i = 0; pow(2, i) < n; i++) 
	{
		if (arr[(int)pow(2, i)] == key)
		{
			printf("Found\n");
			f = 0;
			break;
		}
		else if(arr[(int)pow(2, i)] > key)
		{
			// Go to linear search from 2^(i-1) - 1 to 2^(i) - 1
			for(int j = pow(2,(i - 1)); j < pow(2, i) && j < n; j++)
			{
				if(arr[j] == key)
				{
					printf("Found1\n");
					f = 0;
					break;
				}
			}
			if (!f)
				break;
		}
	}	
	
	if (f)
	{
		printf("Not found\n");
	}

	return 0;
}
