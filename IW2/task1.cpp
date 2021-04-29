#include <iostream>
using namespace std;

char* read_string()
{
	char* str = new char[256];

	cout << "Enter string: ";
	cin.getline(str, 256);

	return str;
}

char* delete_repeats(char* str)
{
	char* res = new char[strlen(str) + 1];
	int shift = 0;

	for (int i = 0; i < strlen(str)-1; ++i) {
		if (str[i] == str[i + 1] && isdigit(str[i])) {
			
			shift++;
			continue;
		}
		else {
			res[i-shift] = str[i];
			
		}
	}
	delete[] str;
	
	return res;
	
}

int main()
{
	char* str = read_string();
	str = delete_repeats(str);

	cout << "Result: " << str << endl;
	//delete[] str;
}
