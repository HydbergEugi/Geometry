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
	cout << "Прямоугольник: высота - " << height << ", ширина - " << width << endl;
	cout << "Периметр равен " << getPerimetr() << ", площадь равна " << getSquare() << endl << endl;
}