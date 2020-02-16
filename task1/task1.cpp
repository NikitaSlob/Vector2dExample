#include "pch.h"
#include <iostream>
#include "Vector2d.h"
using namespace std;
int main()
{
	Vector2d v1(1, -2), v2(3, 4);
	cout << v1.Tan(v2) << endl;
	Vector2d v3=v1.Sum(v2);
	v3.Print();
	Vector2d v4=v3.Sub(v2);
	v4.Print();
	Vector2d v5=v4.Mult(2);
	v5.Print();
	cout << v5.ScalarMult(v2) << endl;;
}

