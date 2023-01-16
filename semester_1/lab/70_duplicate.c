/*
Dec 26, 2022
Author: Aakash Chauhan
Program: Print duplicate numbers
*/

#include <stdio.h>
int main()
{
	int a[20], n, i, temp[20] = {0};

	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter all the elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
		temp[a[i]]++;

	for (i = 0; i < 20; i++)
		if (temp[i] > 1)
			printf("%d ", i);
	printf("\n");
	return 0;
}

/*
#include <stdio.h>

int main()
{
	int a[20], n, i, j, flag;

	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter all the elements: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] != -1)
		{
			flag = 0;
			for (j = i + 1; j < n; j++)
			{
				if (a[i] == a[j])
				{
					flag++;
					a[j] = -1;
				}
			}
			if (flag > 0)
			{
				printf("%d ", a[i]);
			}
		}
	}

	return 0;
}

*/