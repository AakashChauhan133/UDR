/*
	Author: Aakash Chauhan
	Date: February 14, 2023

	Program: Swap first row with last row in a matrix
*/

#include <stdio.h>
#include <math.h>

int isprime(int);
int isArm(int);

int main()
{
	// Local decleration
	int nums[50][50], m, n, i, j, temp;
	
	// Input Section
	printf("Enter the order of matrix: ");
	scanf("%d%d", &m, &n);
	
	printf("Enter all the matrix\n");
	for (i = 0; i < m; i++)
	{
		printf("Row %d: ", i + 1);
		for (j =0; j < n; j++)
			scanf("%d", &nums[i][j]);
	}
	
	// Preview of array
	printf("\nMatrix\n");
	for (i = 0; i < m; i++)
	{
		for (j =0; j < n; j++)
			printf("%d ", nums[i][j]);
		printf("\n");
	}
	printf("\n");
	
	// Logic for swaping first and last row
	for (i = 0; i < n; i++)
	{
		temp = nums[0][i];
		nums[0][i] = nums[m - 1][i];
		nums[m - 1][i] = temp;
	}	
	
	// Output Section
	printf("\nOUTPUT\n");
	for (i = 0; i < m; i++)
	{
		for (j =0; j < n; j++)
			printf("%d ", nums[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
