/*
Nov 29, 2022
Author: Aakash Chauhan
Program: Print sum of given series
1 - (1/pow(2,2)) + (1/pow(3,3)) - (1/pow(4,4)) +... (1/pow(n,n))
*/
#include<stdio.h>
#include<math.h>

int main()
{
	float sum = 0, num, sign = 1;
	
	printf("Enter the value of n: ");
	scanf("%f", &num);
	
	for (int i = 1; i <= num; i++)
	{
		sum = sum + (1/(pow(i,i))) * sign;
		sign = sign * -1;
	}
	
	printf("%f\n", sum);
	return 0;
}
