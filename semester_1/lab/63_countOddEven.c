/*	
Dec 19, 2022
Author: Aakash Chauhan
Program: To Count number of odd and even elements in an array
*/

#include<stdio.h>

int main()
{
	int a[20], n, i, odd, even;
	odd = even = 0;
	
	// Input
	printf("Enter the numbers of Elements: ");
	scanf("%d", &n);
	
	printf("Enter all the elements\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	// Logic
	for (i = 0; i < n; i++)
	{
		if (a[i]%2)
			odd++;
		else
			even++;
	}
	// Output
	printf("Number of Odd's = %d\nNumbers of even's = %d", odd, even);
	
	return 0;
}
