#include"Complex.h"

Complex::Complex(double real, double imaginary)
	:Real{ real }, Imaginary{ imaginary }
{ }

void Complex::print()
{
	std::cout << Imaginary << "*i" << "+" << Real;
}

double Complex::get_module() {
	return sqrt(Real * Real + Imaginary * Imaginary);
}