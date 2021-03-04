#include <iostream>
using namespace std;

int main() {
	int n;
	int max_num;
	int min_num;
	int cur_num;

	cout << "Enter natural n: ";
	cin >> n;
	cout << "\nEnter 1 number: ";
	cin >> min_num;
	max_num = min_num;
	for (int i = 2; i <= n; ++i) {
		cout << "\nEnter " << i << " number: ";
		cin >> cur_num;
		if (cur_num < min_num)
			min_num = cur_num;
		else
			if (cur_num > max_num) {
				max_num = cur_num;
			}
	}

	cout << "Sum of max and min numbers = " << max_num + min_num << endl;

	return 0;
}