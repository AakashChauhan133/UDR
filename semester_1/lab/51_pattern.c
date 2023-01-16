/*
Dec 05, 2022
Author: Aakash Chauhan
Program: Print given pattern (pyramid)
      *
     ***
    *****
   *******
  *********
 ***********
*************
*/
 
 #include<stdio.h>
 
int main()
{
 	int i, num, j, s ;
 	
 	printf("Enter the value of n: ");
 	scanf("%d", &num);
 	
 	for (i = 1; i <= num; i++)
 	{
 		for (s = 0; s < (num - i); s++)
 			printf(" ");
 		for (j = 1; j <= (2*i - 1); j++)
 			printf("*");
 		printf("\n");
 	}
 	return 0;
 }
