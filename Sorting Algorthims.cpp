#include<iostream>
using namespace std;
// we creating swap function for selection sort 
void Swap_By_Address(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
void Swap_By_Value(int a, int b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;

}
// printing an array
void Print_Array(int arr[] , int size) 
{
	for (int i = 0; i < size;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Selection_Sort(int arr[],int size) {
	int min_index =0;
	for (int i = 0;i < size - 1; i++)
	{
		min_index = i;
		for (int j = i + 1;j < size;j++)
		{
			if (arr[j] < arr[min_index])
			{
			 min_index = j;
			}
		}
		if (min_index != i)
		{
			Swap_By_Address(&arr[min_index], &arr[i]);

		}

	}
	Print_Array(arr, size);
}
void Bubble_Sort(int arr[], int size)
{
	for (int i = 0;i < size;i++)
	{
		for (int j = i + 1; j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	Print_Array(arr, size);
}
void Insertion_Sort(int arr[], int size)
{
	int key;
	for (int i = 1;i < size;i++)
	{
		key = arr[i];
		int j = i - 1;
		while (j >= 0 && key < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	Print_Array(arr, size);
}
int main()
{
	int arr[] = {64,15,25,12,22,11};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "size of array is : " << size << endl;
	cout << "Selection Sort\n";
	Selection_Sort(arr, size);
	cout << "Bubble Sort\n";
	Bubble_Sort(arr, size);
	cout << "Insertion Sort\n";
	Insertion_Sort(arr, size);
	return 0;
}