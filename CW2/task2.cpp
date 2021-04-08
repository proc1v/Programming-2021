#include <iostream>
using namespace std;

//-------------------------------------------------------
void read_matrix(int** matrix, int n)
{
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
}

void print_matrix(int** matrix, int n)
{
	cout << endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

void delete_matrix(int** matrix, int n)
{
	for (int i = 0; i < n; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

int** power_matrix(int** matrix, int n)
{
	int** res_matrix = new int* [n];
	for (int i = 0; i < n; ++i) {
		res_matrix[i] = new int[n];
	}

	int element;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			element = 0;
			for (int k = 0; k < n; ++k) {
				element += matrix[i][k] * matrix[k][j];
			}
			res_matrix[i][j] = element;
		}
	}

	return res_matrix;
}

void task2()
{
	int n;
	cout << "Enter size of square matrix (n*n):";
	cin >> n;

	int** matrix = new int* [n];
	for (int i = 0; i < n; ++i) {
		matrix[i] = new int[n];
	}
	read_matrix(matrix, n);

	cout << "Input matrix:";
	print_matrix(matrix, n);

	int** res_matrix = power_matrix(matrix, n);

	cout << "Squared matrix:";
	print_matrix(res_matrix, n);

	delete_matrix(matrix, n);
	delete_matrix(res_matrix, n);
}

/*int main()
{
	task2();

	return 0;
}*/