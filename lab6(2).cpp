#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "factorial.h"
using namespace std;
int main()
{
  int i,n,j;
  long int factorial(long int N);
  cin >> n;
  int C[n];
  for (i=1;i<=n;i++)
  {
    C[i] = (factorial(n)/(factorial(i)*factorial(n-i)));
    cout << "Массив: " << C[i];
  }
  return 0;
}