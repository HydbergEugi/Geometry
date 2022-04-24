#include "Triangle.h"
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

Triangle::Triangle(double a, double b, double c) :a(a), b(b), c(c)
{
}

double Triangle::getPerimetr()
{
	return a + b + c;
}

double Triangle::getSquare()
{
	double p = getPerimetr() / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle::showInfo()
{
	if (isCorrect())
	{
		cout << "Треугольник: сторона а - " << a << ", сторона b - " << b << ", сторона c - " << c << endl;
		cout << "Периметр равен " << getPerimetr() << ", площадь равна " << getSquare() << endl << endl;
	}
	else
	{
		cout << "Треугольник: большая сторона не может быть меньше суммы двух других сторон" << endl << endl;
	}
}

bool Triangle::isCorrect()
{
	int twoSidesSum = 0;
	int maximum;
	if (a > b)
	{
		maximum = a;
		twoSidesSum += b;
	}
	else
	{
		maximum = b;
		twoSidesSum += a;
	}

	if (maximum > c)
	{
		twoSidesSum += c;
	}
	else
	{
		twoSidesSum += maximum;
		maximum = c;
	}

	if (twoSidesSum > maximum)
	{
		return true;
	}
	else
	{
		return false;
	}
}