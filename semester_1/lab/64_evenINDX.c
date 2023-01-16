/*	
Dec 19, 2022
Author: Aakash Chauhan
Program: To print  odd index of an array
*/

#include<stdio.h>

int main()
{
	int a[20], n, i;
	// Input
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("Enter all the elements\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	// Logic
	for (i = 0; i < n; i++)
	{
		if (!(i%2))
			printf("%d ", a[i]);
	}
	
	return 0;
}
