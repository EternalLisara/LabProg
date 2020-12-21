#include <iostream>
#include "factorial.h"
using namespace std;
long int factorial (long int N)
{
  int n,i,factorial;
  cin >> n;
  factorial = 1;
  for (i = 1; i <= n; i++) {
	factorial = factorial * i;
  }
}
