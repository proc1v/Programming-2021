#pragma once
#include<iostream>
#include<fstream>
#include"car.h"
using namespace std;

void read_from_file(const char* fname, int& size, Car*& cars);
void write_to_file(const char* fname, int& size, Car*& cars);
void sort_cars(Car*& cars, int size);
Car& find_oldest(Car*& cars, int size);
