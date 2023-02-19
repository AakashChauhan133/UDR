/*
	Author: Aakash Chauhan
	Date: February 13, 2023

	Program: Find even digits of a number
	Input: 32459
	Output: 2 4
*/

#include <stdio.h>
#include <math.h>

int rev(int);
void Method1(int);
void Method2(int);

int main()
{
	int a;

	// Input Section
	printf("Enter the number: ");
	scanf("%d", &a);

	// Method1(a);
	Method2(a);
	return 0;
}
void Method1(int a)
{
	int flag = 0;
	printf("\nMethod 1\n");

	// first revese then print from last
	a = rev(a);

	while (a)
	{
		if (!((a % 10) % 2))
		{
			printf("Even in digit: %d\n", a % 10);
			flag = 1;
		}
		a = a / 10;
	}
	// in case no even found
	if (!flag)
	{
		printf("No Even\n");
	}
}

void Method2(int a)
{
	int count = 0, flag = 0, temp;
	temp = a;
	printf("\nMethod 2\n");

	while (a)
	{
		count++;
		a /= 10;
	}
	a = temp;
	for (int i = count; i > 0; i--)
	{
		// if (!((a % (int)pow(10, i)) % 2))
		{
			printf("Even is digit: %d\n", (a % (int)pow(10, i)));
			flag = 1;
		}
		// printf("pow %d, i %d\n", (int)pow(10, i), i);
	}
	// in case no even found
	if (!flag)
	{
		printf("No Even\n");
	}
}

int rev(int nums)
{
	// this function is used in method 1
	int ans = 0;
	while (nums)
	{
		ans = (10 * ans) + nums % 10;
		nums = nums / 10;
	}
	return ans;
}
