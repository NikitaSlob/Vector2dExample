#include "pch.h"
#include "Vector2d.h"
#include <iostream>
#include "cmath"
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
void Vector2d::Sum(Vector2d v)
{
	this->x += v.x;
	this->y += v.y;
}
void Vector2d::Sub(Vector2d v)
{
	this->x -= v.x;
	this->y -= v.y;
}
void Vector2d::Mult(double n)
{
	this->x *= n;
	this->y *= n;
}
double Vector2d::ScalarMult(Vector2d v)
{
	return this->x*v.x + this->y*v.y;
}
double Vector2d::Tan(Vector2d v)
{
	double cos = (this->x*v.x + this->y*v.y)/(sqrt(pow(this->x,2)+pow(this->y,2))*sqrt(pow(v.x, 2) + pow(v.y, 2)));
	if (cos > 0)
	{
		return sqrt(1 / pow(cos, 2) - 1);
	}
	else
	{
		return sqrt(1 / pow(cos, 2) - 1)*-1;
	}
}
