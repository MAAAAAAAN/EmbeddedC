#include <stdio.h>

void insert(int arr[], int n)
{
	int key = arr[n];
	int i = n;
	while(arr[i-1] > key)
	{
		arr[i] = arr[i-1];
		i--;
		if(i == 0)
		{
			break;
		}
	}
	arr[i] = key;
}

void straight_insertion_sort(int arr[], int n)
{
	int i;
	for(i=1; i<n; i++)
	{
		insert(arr, i);
	}
}

int main()
{
	int arr[] = {9,1,2,6,3,8,4,5,7};
	straight_insertion_sort(arr, 9);
	
	int i;
	for(i=0; i<9; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
} 
