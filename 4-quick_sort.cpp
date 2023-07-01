#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::swap;
void quicksort(int arr[], int start, int size);
void display(int arr[], int size);
int main()
{
	system("color 06");
	system("title created By AAIE");
	system("clear");
	int arr[] = { 7,4,3,2,19,2,8 };//index 0 ->6
	int size = sizeof(arr) / sizeof(arr[0]);//size 7
	
	cout << " |___ \\          | |   |___ \\          | | " << endl;
	cout << "   __) |_   _  __| |___  __) |_   _  __| | " << endl;
	cout << "  |__ <| | | |/ _` / __||__ <| | | |/ _` | " << endl;
	cout << "  ___) | |_| | (_| \\__ \\___) | |_| | (_| | " << endl;
	cout << " |____/ \\__, |\\__,_|___/____/ \\__, |\\__,_| " << endl;
	cout << "         __/ |                 __/ | " << endl;
	cout << "        |___/                 |___/" << endl;
	
	cout << "The Array Before Sorted" << endl;
	display(arr, size - 1);
	cout << endl;
	cout << "The Array After Sorted" << endl;
	quicksort(arr, 0, size - 1);
	display(arr, size - 1);



	return 0;
}
void quicksort(int arr[], int start, int end)
{
	int right = end;
	int left = start;
	int pivot = left;
	while (left != right)//mean that number not sorted
	{
		if (pivot == left)
		{
			if (arr[pivot] <= arr[right])
			{
				right--;
			}
			else
			{
				swap(arr[pivot], arr[right]);
				pivot = right;
			}

		}
		else if (pivot == right)
		{
			if (arr[pivot] >= arr[left])
			{
				left++;
			}
			else
			{
				swap(arr[pivot], arr[left]);
				pivot = left;
			}
		}
	}
	if (start < pivot)
	{
		quicksort(arr, start, pivot - 1);
	}
	if (end > pivot)
	{
		quicksort(arr, pivot + 1, end);
	}

}
void display(int arr[], int size)
{
	for (int i = 0; i <= size; i++)
	{

		cout << arr[i] << "\t";
	}
}