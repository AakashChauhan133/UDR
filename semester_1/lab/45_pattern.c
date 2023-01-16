/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print given pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <stdio.h>

int main()
{
	int num;
	printf("Enter the value of n: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
			((i + j) % 2 == 0) ? printf("1 ") : printf("0 ");
		printf("\n");
	}
}
