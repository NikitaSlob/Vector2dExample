#include "pch.h"
#include <iostream>
#include "Vector2d.h"
using namespace std;
int main()
{
	Vector2d v1(1, -2), v2(3, 4);
	cout << v1.Tan(v2) << endl;
	Vector2d v3=v1+=v2;
	cout << (string)v3<<endl;
	Vector2d v4=v3-=v2;
	cout << (string)v4<<endl;
	Vector2d v5=v4*=2;
	cout<<(string)v5<<endl;
	cout << v5*v2 << endl;;
}

