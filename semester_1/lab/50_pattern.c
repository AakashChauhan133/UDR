/*
Dec 05, 2022
Author: Aakash Chauhan
Program: Print given pattern
1
2 2
3 3 3
4 4 4 4
*/

#include<stdio.h>

int main()
{
	int i, j, num;
	
	printf("Enter the value of n: ");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d ", i);
		printf("\n");
	}
	
	return 0;
}
