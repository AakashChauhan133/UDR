/*	
Dec 19, 2022
Author: Aakash Chauhan
Program: Declear array in runtime and compile time
*/

#include <stdio.h>

int main()
{
	// Local Declerartion
	int a[5] = {1, 3, 4, 5, 6};
	int b[10], n, i;

	printf("Enter the numbers of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}

	// Display
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}

	return 0;
}
