#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, y, h, max, min;
	x = -4.5;
	h = 0.5;
	min = 0;
	max = 1;
	while (x>= -13.5) {
		y = (2.14*pow(x, 2) + -4.21 * x + 3.25)*sin(x); 
		x = x - h;
		if (y > max) max = y;
		if (y < min) min = y;
	}
	cout << "Answer min and max: " << min << max;
	return 0;
}