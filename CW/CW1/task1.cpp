#include <iostream>
using namespace std;

double cos_custom(double x, double eps = 0.0000001)
{
	double res = 0;
	double element = 1;
	int fact = 2;
	int sign = -1;

	res += element;
	
	do
	{

		element *= ((x * x) / (fact * (fact - 1)));
		fact += 2;

		res += sign*element;
		sign = (sign == -1) ? 1 : -1;

	} while (abs(element) > eps);

	return res;
}

/*int main() {

	double x = 0;
	
	cout << "Enter real x for cos(x): ";
	cin >> x;
	cout << "Custom cos(" << x << ") = " << cos_custom(x)
		<< "\nBuilt-in cos(" << x << ") = " << cos(x) << endl;

	return 0;

}*/

