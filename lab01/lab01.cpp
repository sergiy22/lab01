// lab01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;
int main()
{
	float a = 7.14f, b = -1.92f, x = 4.41f;



	double y = pow(pow(x, 3), 1 / 4) - a * x / log10(x) + b;

	printf("Result: %.5f\n", y);
	cout << "Enter three numbers: ";

	double a1, b1, x1;
	cin >> a1 >> b1 >> x1;


	double y1 = pow(pow(x1, 3), 1 / 4) - a1 * x1 / log10(x1) + b1;

	printf("Result: %.5f\n", y1);
    system ("pause");
	return 0;
}

