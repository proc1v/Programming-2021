#pragma once
#include<iostream>
struct Complex
{
	double Real;
	double Imaginary;

	Complex(double real = 0, double imaginary = 0);

	void print();
	double get_module();
};