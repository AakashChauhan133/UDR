/*
Dec 05, 2022
Author: Aakash Chauhan
Program: Print given pattern (diamond)
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
 */
#include <stdio.h>

int main()
{
	int i, num, j, s, x;
	printf("Enter the value of n: ");
	scanf("%d", &num);
	x = num - 1;
	for (i = 1; i <= num; i++)
	{
		for (j = 0; j < (num - i); j++)
			printf(" ");
		for (s = 1; s <= (2 * i - 1); s++)
			printf("*");
		printf("\n");
	}
	for (i = 2; i <= num; i++)
	{
		for (s = 1; s <= (i - 1); s++)
			printf(" ");
		for (j = 1; j <= (num - i + x); j++)
			printf("*");
		printf("\n");
		x--;
	}
	return 0;
}
