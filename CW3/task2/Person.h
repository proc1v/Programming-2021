#pragma once
#include <iostream>
#define SIZE 20
struct Person
{
	char Name[SIZE];
	char Surname[SIZE];
	int Subjects;

	Person(const char* name = "None", const char* surname = "None", int subjects = 0);
	bool has_one_subject();
};