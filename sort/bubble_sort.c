#include <stdio.h>

void bubble(int arr[], int n)
{
	int temp;
	int i;
	for(i=0; i<n-1; i++)
	{
		if(arr[i] > arr[i+1])
		{
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
}

void bubble_sort(int arr[], int n)
{
	int i;
	for(i=n; i>=1; i--)
	{
		bubble(arr, i);
	}
}

int main()
{
	int arr[] = {9,1,2,6,3,8,4,5,7};
	bubble_sort(arr, 9);
	
	int i;
	for(i=0; i<9; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
