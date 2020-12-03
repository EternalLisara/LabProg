#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	double e, Pi, x, z, b;
	x = 2;
	Pi = 0;
	e = 1;
	z = 1;
	b = 1;
	while (e > 0.00001) {
		e = z * e;
		Pi = Pi + e;
		b = b + x;
		e = 1 / b;
		z = -z;
	}
	Pi = 4 * Pi;
	cout << "Answer: " << Pi;
	return 0;
}