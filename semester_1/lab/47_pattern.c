/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print given pattern
1
1 2
1 2 3
1 2 3 4
*/
#include <stdio.h>

int main()
{
	int num;
	int n = 1;
	printf("Enter the value of n: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", n++);
		}
		n = 1;
		printf("\n");
	}
}
