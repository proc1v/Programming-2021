#include"Complex.h"
using namespace std;

int main()
{
	Complex num(3, 2);
	cout << "|";
	num.print();
	cout << "| = " << num.get_module() << endl;
}
