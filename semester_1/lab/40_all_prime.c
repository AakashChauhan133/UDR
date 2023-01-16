/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print all prime numbers till n
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int num,
		flag = 0;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	// Logic
	for (int i = 2; i <= num; i++)
	{
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag ++;
				break;
			}
		}
		if (flag == 0)
			printf("%d ", i);
		flag = 0;
		
	}
}
