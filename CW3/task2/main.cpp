#include "helpers.h"
#define GROUP_SIZE  20

int main()
{
	Person* students = new Person[GROUP_SIZE];
	int size = 0;

	read_from_file("in1.txt", students, size);
	read_from_file("in2.txt", students, size);
	read_from_file("in3.txt", students, size);

	print_students_with_one_subject(students, size);

	delete[] students;
	return 0;
}
