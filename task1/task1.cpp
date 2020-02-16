#include "pch.h"
#include <iostream>
#include "Vector2d.h"
using namespace std;
int main()
{
	Vector2d v1(1, -2), v2(3, 4);
	cout << v1.Tan(v2) << endl;
	v1.Sum(v2);
	v1.Print();
	v1.Sub(v2);
	v1.Print();
	v1.Mult(2);
	v1.Print();
	cout << v1.ScalarMult(v2) << endl;;
	v1.Print();
}

