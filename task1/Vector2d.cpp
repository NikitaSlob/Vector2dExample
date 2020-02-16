#include "pch.h"
#include "Vector2d.h"
#include <iostream>
#include "cmath"
#include <string>
using namespace std;

Vector2d::Vector2d()
{
	x = 0;
	y = 0;
}

Vector2d::Vector2d(double x, double y)
{
	this->x = x;
	this->y = y;
}
Vector2d::Vector2d(double x1, double y1, double x2, double y2)
{
	this->x = x2 - x1;
	this->y = y2 - y1;
}
Vector2d::Vector2d(const Vector2d &v)
{
	this->x = v.x;
	this->y = v.y;
}
Vector2d::~Vector2d()
{

}
void Vector2d::Setx(double x)
{
	this->x = x;
}
double Vector2d::Getx()
{
	return this->x;
}
void Vector2d::Sety(double y)
{
	this->y = y;
}
double Vector2d::Gety()
{
	return this->y;
}
void Vector2d::Print()
{
	cout << "x y:" << x << ' ' << y << endl;;
}
Vector2d Vector2d::Sum(Vector2d v)
{
	double x1 = this->x + v.x;
	double y1 = this->y + v.y;
	return Vector2d(x1, y1);
}
Vector2d Vector2d::Sub(Vector2d v)
{
	double x1 = this->x - v.x;
	double y1 = this->y - v.y;
	return Vector2d(x1, y1);
}
Vector2d Vector2d::Mult(double n)
{
	double x1 = this->x * n;
	double y1 = this->y * n;
	return Vector2d(x1, y1);
}
double Vector2d::ScalarMult(Vector2d v)
{
	return this->x*v.x + this->y*v.y;
}
double Vector2d::Tan(Vector2d v)
{
	double cos = (this->x*v.x + this->y*v.y) / (sqrt(pow(this->x, 2) + pow(this->y, 2))*sqrt(pow(v.x, 2) + pow(v.y, 2)));
	if (cos > 0)
	{
		return sqrt(1 / pow(cos, 2) - 1);
	}
	else
	{
		return sqrt(1 / pow(cos, 2) - 1)*-1;
	}
}
Vector2d Vector2d::operator+(const Vector2d& vector) const
{
	return Vector2d(x + vector.x, y + vector.y);
}
Vector2d Vector2d::operator-(const Vector2d& vector) const
{
	return Vector2d(x - vector.x, y - vector.y);
}
double Vector2d::operator*(const Vector2d& vector) const
{
	return x * vector.x + y * vector.y;
}
Vector2d Vector2d::operator*(const double k) const
{
	return Vector2d(x*k, y*k);
}
Vector2d operator*(double realNumber, Vector2d vector)
{
	return vector * realNumber;
}
Vector2d& Vector2d::operator++()
{
	x++;
	y++;
	return *this;
}
Vector2d Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}
Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}
Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}
const Vector2d Vector2d::operator+= (const Vector2d& vector)
{
	x += vector.x;
	y += vector.y;
	return *this;
}
const Vector2d Vector2d::operator-= (const Vector2d& vector)
{
	x -= vector.x;
	y -= vector.y;
	return *this;
}
const Vector2d Vector2d::operator*= (const double k)
{
	x *= k;
	y *= k;
	return *this;
}
Vector2d::operator string()
{
	string s = "(" + to_string(x) + ";" + to_string(y) + ")";
	return s;
}