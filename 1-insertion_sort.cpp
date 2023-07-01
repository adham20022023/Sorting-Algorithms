#include<iostream>
using namespace std;
void insertion_sort(int arr[], int size)
{
	int key = 0;
	int sorted = 0;
	for (int x = 1; x < size; x++)
	{
		key = arr[x];
		sorted = x - 1;
		while (sorted > 0 && arr[sorted] > key)
		{
			arr[sorted + 1] = arr[sorted];
			sorted--;
		}
		arr[sorted + 1] = key;
	}
}
void display(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[] = { 5,4,3,2,1};
	int size = sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, size);
	display(arr, size);
	return 0;
}
