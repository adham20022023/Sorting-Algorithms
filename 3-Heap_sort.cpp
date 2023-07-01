#include<iostream>
using namespace std;
//{10,15,3,2,1}
//complete binary tree
/*
*		  10	 
*	   /	  \
*	  15       3
*	/ 	 \ 
*	2	 1
**************************************
*		  15
*	   /	  \
*	  10       3
*	/ 	 \
*	2	 1
* 
* 
* max=i biggest value of it's childern which equal 
*/
void heapify(int arr[], int size, int parent)
{
	int l = 2 * parent + 1;
	int r = 2 * parent + 2;
	int max = parent;
	if (l<size && arr[l]>arr[max])
		max = l;
	if (r<size && arr[r]>arr[max])
		max = r;

	if (max != parent) {
		swap(arr[parent], arr[max]);
		heapify(arr, size, max);
	}
}

void buildHeap(int arr[], int size)
{
/*
*		  15
*	   /	  \
*	  10       3
*	/ 	 \
*	2	 1
*/

	for (int i = size / 2 - 1; i >= 0; i--)
	{
		heapify(arr, size, i);
	}
}
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void heapSort(int arr[], int size)
{

	buildHeap(arr, size);
	for (int size2 = size - 1; size2 >= 0; size2--)//4
	{
		swap(arr[0], arr[size2]);
		heapify(arr, size2, 0);
	}
}



int main()
{
	int arr[] = {10,15,3,2,1};//0=>4 5 elements
	int size = sizeof(arr) / sizeof(arr[0]);
	heapSort(arr, size);
	print(arr, size);

	return 0;
}
