#include <iostream>
using namespace std;

int element(int i)
{
	int a_1 = 1;
	//int a_1 = 3 * a_0 - 5;
	
	if (i == 1)
		return a_1;
	
	
	for (int j = 2; j <= i; ++j) {
		a_1 = 3 * a_1 - 5;
	}
	return a_1;
}

int sum_N_elements(int N)
{
	if (N == 1)
		return element(N);
	return element(N) + sum_N_elements(N - 1);
}


int main() {

	int N;
	cout << "Enter natural N to find sequence sum of N first elements: ";
	cin >> N;
	cout << "\nSum = " << sum_N_elements(N) << endl;

	return 0;
}