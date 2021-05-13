#include"helpers.h"
void read_from_file(const char* fname, int& size, Car*& cars)
{
	ifstream input(fname);

	input >> size;

	cars = new Car[size];

	char brand[SIZE];
	char model[SIZE];
	int year;
	double volume;

	for (int i = 0; i < size; ++i) {
		try
		{
			input.get();
			input.get(brand, SIZE, ',');
			input.get();
			input.get(model, SIZE, ',');
			input.get();
			input >> year;
			input.get();
			input >> volume;
			cars[i] = Car(brand, model, year, volume);
		}
		catch (const char* error)
		{
			cout << "Error: " << error << endl;
			i--;
			size--;
		}
		catch (...) {
			cout << "Error occured\n";
		}

	}
	input.close();
}

void write_to_file(const char* fname, int& size, Car*& cars)
{
	ofstream output(fname);
	output << size << endl;
	for (int i = 0; i < size; ++i) {
		output << cars[i].Brand << ' '
			<< cars[i].Model << ' '
			<< cars[i].Year << ' '
			<< cars[i].EngineÑapacity << endl;
	}
	output.close();
}

void sort_cars(Car*& cars, int size) 
{
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (strcmp(cars[j].Brand, cars[j + 1].Brand) > 0 ||
				(strcmp(cars[j].Brand, cars[j + 1].Brand) == 0 && strcmp(cars[j].Model, cars[j + 1].Model))) {
				swap(cars[j], cars[j + 1]);
			}
		}
	}
}

Car& find_oldest(Car*& cars, int size) {
	int oldest_year = cars[0].Year;
	Car oldest_car = cars[0];
	for (int i = 1; i < size; ++i) {
		if (oldest_year > cars[i].Year) {
			oldest_year = cars[i].Year;
			oldest_car = cars[i];
		}
	}
	return oldest_car;
}