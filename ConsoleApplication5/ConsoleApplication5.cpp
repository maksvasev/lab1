// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "math.h"
#include "windows.h"

using namespace std;

int main()
{
	double a, b, x, y, z;
	cout << "input x\n";
	cin >> x;
	cout << "input y\n";
	cin >> y;
	cout << "input z\n";
	cin >> z;
	a = sqrt(x*x + y) - y * y*pow(sin(x + z), 3) / 3 + sin(13);
	cout << a;
	b = pow(cos(x*x*x), 2) - (x / sqrt(z*z + y * y)) + (exp(x - 2 * y) / pow(sqrt( 3 * y - x * x ), 3));
	system("pause");
	cout << b;
	return 0;

}
