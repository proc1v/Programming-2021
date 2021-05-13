#include "helpers.h"
#define SIZE 50

int main()
{
	Car* cars;
	int size;
	read_from_file("in_list_auto.txt", size, cars);
	sort_cars(cars, size);
	write_to_file("out_list_auto.txt", size, cars);

	Car oldest_car = find_oldest(cars, size);
	cout << "Oldest car is: " << oldest_car.Brand << " " << oldest_car.Model << " " << oldest_car.Year << endl;

	delete[] cars;

	return 0;
}
