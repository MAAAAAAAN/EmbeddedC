#include <stdio.h>

int find_max_pos(int arr[], int n)
{
	int max = arr[0];
	int pos = 0;
	int i;
	for(i=0; i<n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			pos = i;
		}
	}
	return pos;
}

void simple_selection_sort(int arr[], int n)
{
	while(n > 1)
	{
		int pos = find_max_pos(arr, n);
		int temp = arr[pos];
		arr[pos] = arr[n-1];
		arr[n-1] = temp;
		n--;
	}
}

int main()
{
	int arr[] = {9,1,2,6,3,8,4,5,7};
	simple_selection_sort(arr, 9);
	
	int i;
	for(i=0; i<9; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
