#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	double radius;
public:
	Circle(double);
	double getPerimetr() override;
	double getSquare() override;
	void showInfo() override;
};
