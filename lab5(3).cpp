#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n, k, i;
	k = 0;
	i = 2; 
	cin >> n;
	while (i<=n) {
		bool pr = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				pr = false;
		}
		if (pr == true)
			cout << i << k++;
		i++;
	}
	cout << "Prostykh chisel:" << k;
	return 0;
}