/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print sum of given series
1**2 - 2**2 + 3**2 - 4**2 + ...  n**2
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int sum = 0,
		sign = 1,
		num;
	
	printf("Enter the value of n: ");
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++)
	{
		sum = sum + pow(i, 2) * sign;
		sign = sign * -1;
	}
	printf("%d\n", sum);
	return 0;
}
