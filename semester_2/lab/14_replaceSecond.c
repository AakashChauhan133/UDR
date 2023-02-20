/*
	Author: Aakash Chauhan
	Date: February 20, 2023

	Program: Replace all the numbers of array with its second digit 
		constraint: numbers must have 2 digit or more
*/

#include <stdio.h>

int second(int);
int main()
{
	// Local decleration		
	int a[20], n, i;
	
	//Input
	printf("Enter the  size of array: ");
	scanf("%d", &n);

	printf("Enter all the elements\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	// Preview
	printf("\nPREVIEW\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// Logic
	for (i = 0; i < n; i++)
		a[i] = second(a[i]);
		
	// Output
	printf("\nOUTPUT\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
			
	return 0;
}
int second(int a)
{
	int rev = 0;
	while (a)
	{
		rev = (rev * 10) + (a % 10);
		a /= 10;	
	}
	rev /= 10;
	return rev % 10;
}
