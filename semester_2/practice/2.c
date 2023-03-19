/*
	Author: Aakash Chauhan
	Date: February 27, 2023
	Program: Print amout in words (format given RRRR.PP)
*/

#include <stdio.h>

int main()
{
	int ruppe, r = 0, rcount = 0, p = 0, pcount = 0;
	float pesa, amount;
	printf("Enter the amount (RRRR.PP): ");
	scanf("%f", &amount);

	// Logic
	ruppe = amount;
	pesa = 100 * (amount - ruppe);
	while (ruppe != 0)
	{
		rcount++;
		r = (r * 10) + ruppe % 10;
		ruppe /= 10;
	}
	while ((int)pesa != 0)
	{
		pcount++;
		p = (p * 10) + (int)pesa % 10;
		pesa = pesa / 10;
	}
	while (r != 0)
	{
		int d = r % 10;
		r = r / 10;

		if (rcount == 2)
		{
			if (d == 1)
			{
				switch (r % 10)
				{
				case 0:
					printf("Ten ");
					break;
				case 1:
					printf("Eleven ");
					break;
				case 2:
					printf("Twelev ");
					break;
				case 3:
					printf("Thirteen ");
					break;
				case 4:
					printf("Fourteen ");
					break;
				case 5:
					printf("Fifteen ");
					break;
				case 6:
					printf("Sixteen ");
					break;
				case 7:
					printf("Seventeen ");
					break;
				case 8:
					printf("Eighteen ");
					break;
				case 9:
					printf("Nineteen ");
					break;
				}
				break;
			}
			else if (d == 2)
			{
				switch (r % 10)
				{
				case 0:
					printf("Twenty ");
					break;
				}
			}			
			else if (d == 3)
			{
				switch (r % 10)
				{
				case 0:
					printf("Thirty ");
					break;
				}
			}			
			else if (d == 4)
			{
				switch (r % 10)
				{
				case 0:
					printf("Fourty ");
					break;
				}
			}
			else if (d == 5)
			{
				switch (r % 10)
				{
				case 0:
					printf("Fifty ");
					break;
				}
			}
			else if (d == 6)
			{
				switch (r % 10)
				{
				case 0:
					printf("Sixty ");
					break;
				}
			}
			else if (d == 7)
			{
				switch (r % 10)
				{
				case 0:
					printf("Seventy ");
					break;
				}
			}

			else if (d == 8)
			{
				switch (r % 10)
				{
				case 0:
					printf("Eighty ");
					break;
				}
			}
			else if (d == 9)
			{
				switch (r % 10)
				{
				case 0:
					printf("Ninety ");
					break;
				}
			}
		}
		switch (d)
		{
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
		}

		switch (rcount)
		{
		case 3:
			printf(" Hundred ");
			break;
		case 4:
			printf(" Thousand ");
			break;
		}
		rcount--;
	}
	(p) ? printf(" point ") : 0;
	// for point value

	while (p != 0)
	{
		int d = p % 10;
		p = p / 10;
		switch (d)
		{
		case 1:
			printf("One ");
			break;
		case 2:
			printf("Two ");
			break;
		case 3:
			printf("Three ");
			break;
		case 4:
			printf("Four ");
			break;
		case 5:
			printf("Five ");
			break;
		case 6:
			printf("Six ");
			break;
		case 7:
			printf("Seven ");
			break;
		case 8:
			printf("Eight ");
			break;
		case 9:
			printf("Nine ");
		default:
			printf("Zero ");
		}
	}
	printf("\n");

	return 0;
}
