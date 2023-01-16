/*
Dec 26, 2022
Author: Aakash Chauhan
Program: reverse with out using second array
*/

#include<stdio.h>

int main()
{
	int a[20], i, j, n, temp;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter all the elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	// Logic
	 i = 0, j = n - 1;
	 while (i < j)
	 {
	 	temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	 	i++, j--;
	 }
	 
	 for (i = 0; i < n; i++)
	 	printf("%d ", a[i]);
	return 0;
}

