/*
Dec 26, 2022
Author: Aakash Chauhan
Program: Search an elements
*/

#include<stdio.h>

int main()
{
	int a[20], n, i, x;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter all the elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	printf("Enter the elements to  search: ");
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
			printf("index is %d\nposition is %d\n", i, i + 1);
	}
	
	return 0;	
}
