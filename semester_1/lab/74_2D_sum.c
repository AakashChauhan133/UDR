/*	
Jan 03, 2023
Author: Aakash Chauhan
Program: Sum of two 2D arrays
*/

#include<stdio.h>
int main()
{
	int a[20][20], b[20][20], sum[20][20] = {0}, m, n, i, j;
	
	// Input
	printf("Enter the order of matrix : ");
	scanf("%d%d", &m, &n);
	
	printf("Enter all elements of martix 1\n");
	for (i = 0; i < m; i++)
	{
		 printf("Enter the elements of row %d: ", i+1);
		 for(int j = 0; j < n; j++)
		 {
		 	scanf("%d", &a[i][j]);
		 }
	}
	printf("Enter all elements of martix 2\n");
	for (i = 0; i < m; i++)
	{
		 printf("Enter the elements of row %d: ", i+1);
		 for(j = 0; j < n; j++)
		 {
		 	scanf("%d", &b[i][j]);
		 }
	}
	for (i = 0; i < m; i++)
	{
		 for(j = 0; j < n; j++)
		 {
		 	sum[i][j] = a[i][j] + b[i][j];
		 }
	}
	
	printf("Sum of both matrix\n");
	for (i = 0; i < m; i++)
	{
		 for(j = 0; j < n; j++)
		 {
		 	printf("%d ", sum[i][j]);
		 }
		 printf("\n");
	}
	
	return 0;
}
