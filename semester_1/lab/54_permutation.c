/*
Dec 12, 2022
Author: Aakash Chauhan
Program: Print nCr
*/

#include <stdio.h>

int fact(int);

int main()
{
	int num, r, res;
	printf("Enter the value of n: ");
	scanf("%d", &num);
	printf("Enter the value of r: ");
	scanf("%d", &r);

	res = fact(num) / (fact(r) * fact(num - r));
	printf("\nThe value of %dC%d is %d\n", num, r, res);
	return 0;
}

int fact(int num)
{
	if (num == 0 || num == 1)
		return 1;
	return (num * fact(num - 1));
}
