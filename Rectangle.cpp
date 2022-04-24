#include "Rectangle.h"
#include <iostream>
#include <string>

using namespace std;

Rectangle::Rectangle(double height, double width) :height(height), width(width)
{
}

double Rectangle::getPerimetr()
{
	return 2 * (height + width);
}

double Rectangle::getSquare()
{
	return height * width;
}

void Rectangle::showInfo()
{
	cout << "�������������: ������ - " << height << ", ������ - " << width << endl;
	cout << "�������� ����� " << getPerimetr() << ", ������� ����� " << getSquare() << endl << endl;
}