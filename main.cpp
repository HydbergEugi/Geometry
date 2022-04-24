#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <iostream>

int main() {
	setlocale(LC_ALL, "RUS");

	Rectangle rectangle(1, 9);
	Circle circle(1.8);
	Triangle triangle(4, 6, 9);

	rectangle.showInfo();
	circle.showInfo();
	triangle.showInfo();

	return 0;
}