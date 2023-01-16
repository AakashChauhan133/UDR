/*
Dec 19, 2022
Author: Aakash Chauhan
Program: Print sum and average of elements of a array
*/

#include <stdio.h>

int main()
{
	int a[20], n, i, sum;
	float avg;

	// Input
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	// Sum
	for (i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	// average
	avg = (float)sum / n;
	printf("Sum = %d \nAverage = %f", sum, avg);

	return 0;
}
