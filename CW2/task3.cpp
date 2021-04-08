#include <iostream>
using namespace std;


void readArr(int arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void printArr(int arr[], int size)
{
	cout << endl;
	for (int i = 0; i < size; ++i)
		cout << arr[i] << ' ';
	cout << endl;
}
int* delete_identical_elements(int*& arr1, int*& arr2, int& size1, int& size2)
{
	int count = 0;
	int index_of_temp_arr = 0;
	bool identical = false;
	int* temp_arr = new int[size1];
	
	for (int i = 0; i < size1; ++i) {
		identical = false;
		for (int j = 0; j < size2; ++j) {
			if (arr1[i] == arr2[j]) {
				identical = true;
				count++;
				break;
			}
		}
		if (!identical) {
			temp_arr[index_of_temp_arr] = arr1[i];
			index_of_temp_arr++;
		}
	}

	size1 -= count;
	int* new_arr1 = new int[size1];
	for (int i = 0; i < size1; ++i) {
		new_arr1[i] = temp_arr[i];
	}
	
	delete[] temp_arr;
	delete[] arr1;

	return new_arr1;
}

void task3()
{
	int size1, size2;
	
	cout << "enter size of 1st array:";
	cin >> size1;
	int* arr1 = new int[size1];
	readArr(arr1, size1);

	cout << "enter size of 2nd array:";
	cin >> size2;
	int* arr2 = new int[size2];
	readArr(arr2, size2);

	cout << "1st array:";
	printArr(arr1, size1);
	cout << "2nd array:";
	printArr(arr2, size2);

	arr1 = delete_identical_elements(arr1, arr2, size1, size2);

	cout << "Changed 1st array:";
	printArr(arr1, size1);

	delete[] arr1;
	delete[] arr2;

}

int main()
{
	task3();
}
