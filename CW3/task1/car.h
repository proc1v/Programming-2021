#pragma once
#define SIZE 50 
struct Car
{
	char Brand[SIZE];
	char Model[SIZE];
	int Year;
	double Engine—apacity;

	Car(const char* brand = "None", const char* model = "None", int year = 2000, double volume = 1);
};