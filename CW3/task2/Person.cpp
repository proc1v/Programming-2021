#include "Person.h"
#define SIZE 20
Person::Person(const char* name, const char* surname, int subjects)
{
	strcpy_s(Name, SIZE, name);
	strcpy_s(Surname, SIZE, surname);
	if (subjects < 0) {
		throw "Invalid number of subjects";
	}
}

bool Person::has_one_subject()
{
	return Subjects == 1;
}