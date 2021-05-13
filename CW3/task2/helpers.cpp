#include "helpers.h"

int is_created(Person* persons, int size, const char* name, const char* surname)
{
	for (int i = 0; i < size; ++i) {
		/*cout << "In list " << persons[i].Name << ' ' << persons[i].Surname << endl;
		cout << "Input " << name << ' ' << surname << endl;*/
		if (strcmp(persons[i].Name, name) == 0 && strcmp(persons[i].Surname, surname) == 0) {
			return i;
		}
	}
	return -1;
}

void read_from_file(const char* fname, Person*& persons, int& size)
{
	ifstream input(fname);

	int file_size;
	input >> file_size;

	char name[SIZE];
	char surname[SIZE];

	int position;

	for (int i = 0; i < file_size; ++i) {
		input >> name;
		input >> surname;
		
		position = is_created(persons, size, name, surname);
		if (position != -1) {
			persons[position].Subjects++;
		}
		else {
			strcpy_s(persons[size].Name, SIZE, name);
			strcpy_s(persons[size].Surname, SIZE, surname);
			persons[size].Subjects = 1;
			size++;
		}

	}
}

void print_students_with_one_subject(Person* persons, int size) {
	
	cout << "Students with one subject:\n";
	
	for (int i = 0; i < size; ++i) {
		if (persons[i].has_one_subject()) {
			cout << persons[i].Name << " " << persons[i].Surname << endl;
		}
	}
}