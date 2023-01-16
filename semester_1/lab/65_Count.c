/*	
Dec 19, 2022
Author: Aakash Chauhan
Program: Count number of elements less, gereater and equal to given number
*/

#include<stdio.h>

int main()
{
	int a[20], n, i, k, gret, less, eq;
	gret = less = eq = 0;

	// Input
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter all the elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the number want to check: ");
	scanf("%d", &k);
	
	// Logic
	for(i = 0; i < n; i++)
	{
		if (a[i] < k)
			less++;
		else if (a[i] > k)
			gret++;
		else
			eq++;
	}
	
	printf("Number of greater elements = %d\nNumber of less elements = %d\nNumber of equal elements = %d\n", gret, less, eq);
	return 0;
}
