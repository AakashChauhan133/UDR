#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Local decleration
	int *p, n, i, num;
	printf("/********** INPUT **********/\n");
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	// Dynamic memory allocation
	p = (int *)malloc(sizeof(int) * n);
	
	// Input for array
	for (i = 0; i < n; i++)
		scanf("%d", (p + i));
	
	// Logic for searching element
	printf("Enter the element to search: ");
	scanf("%d", &num);
	
	for (i = 0; i < n; i++)
	{
		if (*(p + i) == num)
			printf("Position => %d\n", i + 1);
	}

	// Logic for replacing with cube of given number
	for (i = 0; i < n; i++)
	{
		if (*(p + i) == num)
			*(p + i) = num * num * num;
	}

	// Output Section
	for (i = 0; i < n; i++)
		printf("%d ", *(p + i));
	return 0;
}