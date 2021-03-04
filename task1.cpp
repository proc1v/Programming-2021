#include <iostream>
using namespace std;

int main1() {
	int n;
	cout << "Enter natural number: ";
	cin >> n;
	cout << endl;

	for (int i = 0; i < n; ++i) {
		for (int j = 1; j <= n - i; ++j) {
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}