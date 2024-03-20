/*
 *	Author	:	Aakash Chauhan
 *	Date	:	Feb 2, 2024
 *	Count the numbers of comparison to find key in binary search
 */

#include <stdio.h>

#define MAX	10

int main()
{
	int arr[MAX], i, key, count, mid, n, f = 1, l , r;
	
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
	l = 0;
	r = n ;
	
	/*
		l			   mid						r = 5
		|				|						|
		v				v						v
	+-------+-------+-------+-------+-------+
	|	0	|	1 	|	2	|	3	|	4	|
	+-------+-------+-------+-------+-------+
	
	*/	
	while (1)
	{
		mid = (l + r) / 2;
		
		
		{	
			// This block always count
			count++;
			if (arr[mid] == key)
			{
				f = 0;
				printf("Count of comparison = %d\n", count);
				break;
			}
		}
		
		if (l == r || mid >= n - 1)
			break;
		else if(arr[mid] < key)
		{
			l = mid;
		}
		else if(arr[mid] > key)
		{
			r = mid;
		}
	}
	
	if (f)
	{
		printf("Not found\n");
	}

	return 0;
}
