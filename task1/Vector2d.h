#pragma once
#include <string>
using namespace std;
class Vector2d
{
public:
	Vector2d();
	~Vector2d();
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d &);
	void Setx(double);
	double Getx();
	void Sety(double);
	double Gety();
	void Print();
	Vector2d Sum(Vector2d);
	Vector2d Sub(Vector2d);
	Vector2d Mult(double);
	double ScalarMult(Vector2d);
	double Tan(Vector2d);
	Vector2d operator+(const Vector2d& vector) const;
	Vector2d operator-(const Vector2d& vector) const;
	double operator*(const Vector2d& vector) const;
	Vector2d operator*(const double) const;
	friend Vector2d operator*(double, Vector2d);
	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);
	const Vector2d operator += (const Vector2d &);
	const Vector2d operator -= (const Vector2d &);
	const Vector2d operator *= (const double);
	operator string();
private:
	double x;
	double y;
};

