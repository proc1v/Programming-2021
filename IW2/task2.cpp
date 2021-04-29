#include <iostream>
#include <fstream>
using namespace std;

char* read_file(char* name)
{
	ifstream inf;
	inf.open(name);

	char* str = new char[256];
	inf.getline(str, 256);

	inf.close();

	return str;
}

void write_file(char* name, char* str)
{
	ofstream outf;
	outf.open(name);

	outf << str;
	outf.close();
}

void reverse_str(char* str)
{
	for (int i = 0; i < strlen(str) / 2; ++i) {
		char temp = str[i];
		str[i] = str[strlen(str) - 1 - i];
		str[strlen(str) - 1 - i] = temp;
	}
}

char* edit(char* str)
{
	char* res = new char[50]{'\0'};
	char temp_word[50];
	int j = 0;
	bool contains_symbol;
	
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] != ' ') {
			temp_word[j] = str[i];
			j++;
		}
		else {
			temp_word[j] = '\0';
			j = 0;
			contains_symbol = false;
			for (int k = 0; temp_word[k] != '\0'; ++k) {
				if (!isalnum(temp_word[k])) {
					contains_symbol = true;
					break;
				}
			}
			if (!contains_symbol) {
				reverse_str(temp_word);
				strcat_s(res, 50, temp_word);
				strcat_s(res, 50, " ");
			}
			strcpy_s(temp_word, 50, "");
		}
	}
	return res;
}

int main()
{
	char in_file[] = "in.txt";
	char out_file[] = "out.txt";
	
	char* str = read_file(in_file);
	char* str_edited = edit(str);

	write_file(out_file, str_edited);

	delete[] str;
	delete[] str_edited;
	
}