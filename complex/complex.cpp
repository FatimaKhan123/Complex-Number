
#include"stdafx.h"
#include<iostream>
#include "complex.h"
using namespace std;

int main()
{
	cout << "First number:" << endl;
	complexnumber z1(4, -3);
	z1.display();
	complexnumber z2(-8, 2);
	cout << "Second number:" << endl;
	z2.display();
	complexnumber z3;
	z3 = z1 + z2;
	cout << "Addition :" << endl;
	z3.display();
	z3 = z1 - z2;
	cout << "Subtraction :" << endl;
	z3.display();
	z3 = z1 * z2;
	cout << "multiplication:" << endl;
	z3.display();
	z3 = z1 / z2;
	cout << "division:" << endl;
	z3.display();
	system("pause");
}

