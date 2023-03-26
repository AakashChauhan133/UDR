#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int calculateX(int, int, int);
void delay(int number_of_seconds)
{
	int milli_seconds = number_of_seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds)
		;
}
int main()
{
	// Variable decleration
	int xlen, ylen;
	char frame[100][100];
	xlen = ylen = 30;
	int m = 1;
	int c = 0;
	int p = 0;

	while (p < 50)
	{
		// Assiging to array
		for (int i = 0; i < ylen; i++)
		{	
			for (int j = 0; j < xlen; i++)
				frame[i][j] = ' ';
		}	
		for (int i = 0; i < ylen; i++)
		{	
			
			frame[calculateX(i, m, c)][i] = '$';
		}
		c++;
		// printf("\e[1;1H\e[2J");
		system("cls");
		for (int i = 0; i < xlen; i++)
		{
			for (int j = 0; j < ylen; j++)
			{
				printf("%c  ", frame[i][j]);
			}
			printf("\n");
		}
		p++;
		delay(1);
	}
	return 0;
}

int calculateX(int y, int m, int c)
{
	return (y - c) / m;
}
