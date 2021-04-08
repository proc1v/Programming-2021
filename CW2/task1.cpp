#include <iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void read_arr(int arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void print_arr(int arr[], int size)
{
	cout << endl;
	for (int i = 0; i < size; ++i)
		cout << arr[i] << ' ';
	cout << endl;
}

void move_zero_to_start(int arr[], int size)
{
	for (int i = 1; i < size; ++i) {
		if (arr[i] == 0) {
			int j = i;
			while (arr[j - 1] != 0 && j != 0) {
				swap(arr[j], arr[j - 1]);
				j--;
			}
		}
	}
}

void task1()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	
	int* arr = new int[size];
	read_arr(arr, size);

	cout << "Input array:";
	print_arr(arr, size);

	move_zero_to_start(arr, size);
	cout << "Changed array with moved zeros:";
	print_arr(arr, size);

	delete[] arr;
}


/*int main()
{
	task1();

	return 0;
}*/
