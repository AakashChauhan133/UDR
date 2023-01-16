/*	
Jan 03, 2023
Author: Aakash Chauhan
Program: Transpose of matrix
*/

#include<stdio.h>
int main()
{
	int a[20][20], m, n, i, j;
	
	// Input
	printf("Enter the order of matrix : ");
	scanf("%d%d", &m, &n);
	
	printf("Enter all elements of martix\n");
	for (i = 0; i < m; i++)
	{
		 printf("Enter the elements of row %d: ", i+1);
		 for(int j = 0; j < n; j++)
		 {
		 	scanf("%d", &a[i][j]);
		 }
	}
	
	// Logic
	printf("Transpose of martix\n");
	for (i = 0; i < n; i++)
	{
		 for(int j = 0; j < m; j++)
		 {
		 	printf("%d ", a[j][i]);
		 }
		 printf("\n");
	}
	
	return 0;	
}
