
#include "Complex.h"

Complex::Complex() :real(0), imag(0)
{}

Complex::Complex(float x, float y) : real(x), imag(y){}

float Complex :: sqr(float x) const
{
	return x*x;
}

float Complex::realN(const Complex& v) const
{
	return v.real;
}

float Complex::imagN(const Complex& v) const
{
	return v.imag;
}

Complex operator+(const Complex& v, const Complex& v2)
{
	float result_real = v.imagN(v) + v2.realN(v2);
	float result_imaginary = v.imagN(v) + v2.imagN(v2);
	
	Complex sum1(result_real, result_imaginary);
	return sum1;

}

Complex operator-(const Complex& v, const Complex& v2)
{
	float result_real = v.realN(v) - v2.realN(v2);
	float result_imaginary = v.imagN(v) - v2.imagN(v2);

	Complex sub(result_real, result_imaginary);
	return sub;

}

Complex operator*(const Complex& v, const Complex& v2)
{
	float result_real = v.realN(v) * v2.realN(v2) - v.imagN(v) * v2.imagN(v2);
	float result_imaginary = v.realN(v) * v2.imagN(v2) + v.imagN(v) * v2.realN(v2);

	Complex sum(result_real, result_imaginary);
	cout << endl << result_real << result_imaginary << endl;
	return sum;

}

Complex operator/(const Complex& v, const Complex& v2)
{
	float result_real = (v.realN(v) * v2.realN(v2) + v.imagN(v) * v2.imagN(v2)) / (v.sqr(v2.realN(v2)) + v.sqr(v2.imagN(v2)));
	float result_imaginary = (v.imagN(v) * v2.realN(v2) - v.realN(v) * v2.imagN(v2)) / (v.sqr(v2.realN(v2)) + v.sqr(v2.imagN(v2)));

	Complex sum(result_real, result_imaginary);
	return sum;

}


ostream& operator<<(ostream& os, const Complex& v)
{
	os << v.real << " + " << v.imag<<"i";
	return os;
}

istream& operator>>(istream& is, Complex& v)
{
	cout << "\nEnter the complex:";
	is >> v.real >> v.imag;
	return is;
}