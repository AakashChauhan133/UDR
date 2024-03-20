#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int c = 0;
int s = 0;

#define MAX 10

void sort(int arr[], int l, int r);
int part(int [], int, int);
void disp(int arr[], int n);

int main()
{
	int arr[10] = {0};
	int n;
	int i;	
	
	// Input section
	printf("Enter the size of array: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);


	// calling function
	sort(arr, 0, n - 1);
	
	// Output 
	disp(arr, n);
	printf("Comparisons = %d \nSwaps = %d\n", c, s);
	return 0;
}

void sort(int arr[], int l, int r)
{
	int  loc;
	c++;
	if (l < r)
	{
		loc = part(arr, l , r);		// get the location of sorted elemet (ie. random pivot)
		sort(arr, l, loc - 1);		// left side of the sorted pivot element
		sort(arr, loc + 1, r);		// right side of the sorted pivot element
	}
}	

int part(int arr[], int l, int r)
{
    srand(time(0));
    int pivot_indx = rand() % (r - l + 1) + l; 
	pivot_indx = l;
	int start = l;
	int end = r; 
	int temp;
	
	while (start < end)
	{
		while (arr[start] <= arr[pivot_indx]) 
		{
			start++;
		}
		while (arr[end] > arr[pivot_indx])
		{
			end--;
		}
		c++;
		if (start < end)
		{
			s++;
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
		
	}
	s++;
	temp = arr[pivot_indx];
	arr[pivot_indx] = arr[end];
	arr[end] = temp;

	return end;
}

void disp(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}







