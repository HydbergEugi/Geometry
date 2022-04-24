#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	double a;
	double b;
	double c;
	bool isCorrect();
public:
	Triangle(double, double, double);
	double getPerimetr() override;
	double getSquare() override;
	void showInfo() override;
};

