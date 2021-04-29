#include <iostream>
#include <fstream>
using namespace std;

char* read_file(char* name)
{
	ifstream inp;
	inp.open(name);

	char* str = new char[256];
	inp.getline(str, 256);

	inp.close();

	return str;
}

char* edit(char* str)
{

}