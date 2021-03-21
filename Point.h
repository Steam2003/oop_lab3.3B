#pragma once
#include "Pair.h"
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Point : public Pair
{
public:
	Point();
	Point(double a, double b);
	Point(const Point& A);
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
	operator string() const;
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void toPolar() const;
	void Distance() const { cout << "Polar radius: " << sqrt(x * x + y * y) << endl; };
	bool operator ==(const Point&);
	bool operator !=(const Point&);
	Point& operator --();
	Point& operator ++();
	Point operator --(int);
	Point operator ++(int);
};

