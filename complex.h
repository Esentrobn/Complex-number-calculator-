#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <string>
using namespace std;

class Complex
{

private:
	float real, imag;

public:
	Complex();
	float sqr(float x) const;
	Complex(float x, float y);
	float realN(const Complex& v) const; 
	float imagN(const Complex& v) const;
	friend ostream& operator<<(ostream& os, const Complex& v);
	friend istream& operator>>(istream& is, Complex& v);
};


Complex operator+(const Complex& v, const Complex& v2); // addition operator overide
Complex operator-(const Complex& v, const Complex& v2); // sub operator overide
Complex operator*(const Complex& v, const Complex& v2); // mul operator overide
Complex operator/(const Complex& v, const Complex& v2); // div operator overide

#endif