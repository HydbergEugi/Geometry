#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	double height;
	double width;
public:
	Rectangle(double, double);
	double getPerimetr() override;
	double getSquare() override;
	void showInfo() override;
};

