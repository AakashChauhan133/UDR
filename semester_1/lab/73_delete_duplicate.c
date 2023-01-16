/*
Dec 26, 2022
Author: Aakash Chauhan
Program: Delete duplicate elements from the array
*/

#include<stdio.h>

int main()
{
	int a[20], n, i, temp[20] = {0};
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter all the elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for (i = 0; i < n; i++)
		temp[a[i]] ++;
	for (i = 0; i < 20; i++)
		if (temp[i] > 0)
			printf("%d ", i);
		
			printf("\n");
	return 0;
}

