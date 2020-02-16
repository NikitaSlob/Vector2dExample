#pragma once
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
private:
	double x;
	double y;
};

