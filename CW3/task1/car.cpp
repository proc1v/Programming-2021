#include "car.h"
#include <iostream>
#define SIZE 50

Car::Car(const char* brand, const char* model, int year, double volume)
{
	strcpy_s(Brand, SIZE, brand);
	strcpy_s(Model, SIZE, model);
	if (year < 1885) {
		throw "Invalid year ( struct Car )\n";
	}
	Year = year;
	if (volume <= 0) {
		throw "Invalid capacity ( struct Car )\n";
	}
	EngineÑapacity = volume;
}