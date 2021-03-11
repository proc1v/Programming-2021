#include <iostream>
using namespace std;

int num_size(int num)
{
	num = abs(num);
	
	int res = 0;
	while (num) {
		num /= 10;
		res += 1;
	}
	return res;
}


// функція яка відбирає числа з непарних позицій і повертає натуральне число
int transform_number(int num)
{
	int res = 0;
	int multiplier = 1;
	int size = num_size(num);
	int* numbers = new int[size];
	int counter = size-1;

	num = abs(num);
	while (num) {
		numbers[counter] = num % 10;
		num /= 10;
		counter--;
	}
	for (int i = (size % 2 == 0) ? size-2 : size - 1; i >= 0; i-=2) {
		res += multiplier * numbers[i];
		multiplier *= 10;
	}
	return res;
	

	return res;

}

bool is_odd(int number)
{
	for (int i = 2; i < number; ++i) {
		if (number % i == 0)
			return false;
	}
	return true;
}


/*int main()
{
	int number;
	cout << "Enter int number: ";
	cin >> number;
	if (is_odd(transform_number(number)))
		cout << "Number taken from odd positions of number " << number << " is odd\n";
	else
		cout << "Number taken from odd positions of number " << number << " is not odd\n";

	return 0;
}*/