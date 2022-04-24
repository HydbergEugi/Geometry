#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

Circle::Circle(double radius) :radius(radius)
{
}

double Circle::getPerimetr()
{
	return 2 * 3.14 * radius;
}

double Circle::getSquare()
{
	return 3.14 * radius * radius;
}

void Circle::showInfo()
{
	cout << "����: ������ - " << radius << endl;
	cout << "�������� ����� " << getPerimetr() << ", ������� ����� " << getSquare() << endl << endl;
}