/*
    Author  :   Aakash Chauhan
    Date    :   Mar 01, 2024
    Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n))
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

void sort(int arr[], int l, int r);
int part(int [], int, int);
void disp(int arr[], int n);

int main()
{
	int arr[MAX] = {0};
	int n;
	int i;	
	int f = 0;

	// Input section
	printf("Enter the size of array: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);


	// calling function
	sort(arr, 0, n - 1);
	
    for (i = 0; i < n-1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            f = 1;
            printf("YES\n");
            break;   
        }
    }
    if (f == 0)
    {
        printf("NO\n");
    }

	// Output
	disp(arr, n);

	return 0;
}

void sort(int arr[], int l, int r)
{
	int  loc;
	if (l < r)
	{
		loc = part(arr, l , r);		// get the location of sorted elemet (ie. random pivot)
		sort(arr, l, loc - 1);		// left side of the sorted pivot element
		sort(arr, loc + 1, r);		// right side of the sorted pivot element
	}
}	

int part(int arr[], int l, int r)
{
	int pivot = arr[l];
	int start = l;
	int end = r;
	int temp;
	
	while (start < end)
	{
		while (arr[start] <= pivot) 
		{
			start++;
		}
		while (arr[end] > pivot)
		{
			end--;
		}
		if (start < end)
		{
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
		
	}
	temp = arr[l];
	arr[l] = arr[end];
	arr[end] = temp;

	return end;
}

void disp(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}







