#pragma once
#include<fstream>
#include"Person.h"
using namespace std;

bool is_created(Person persons, int size, const char* name, const char* surname);
void read_from_file(const char* fname, Person*& persons, int& size);
void print_students_with_one_subject(Person* persons, int size);