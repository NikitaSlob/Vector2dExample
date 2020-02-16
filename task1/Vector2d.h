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
	void Sum(Vector2d);
	void Sub(Vector2d);
	void Mult(double);
	double ScalarMult(Vector2d);
	double Tan(Vector2d);
private:
	double x;
	double y;
};

