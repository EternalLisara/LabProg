#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    float y, a, x, b, c, h, xEnd, x1;
    int i, j;
    cout << "Enter x, xEnd, a, b, c, h ";
    cin >> x >> xEnd >> a >> b >> c >> h;
    x1 = x;
    while ((x <= xEnd)) {
        y = (a * x * x * sin(x)) + (b * x) + c;
        j++;
        x += h;
    }
    float result[j];
    cout << "Массив до: " << endl;
    for (i = 0; i < j;) {
        float buf = (a * x1 * x1 * sin(x1)) + (b * x1) + c;
        cout << "Результат [" << i + 1 << "] = " << h;
        x1 += h;
        i++;
    }
    int k, z;
    for (i = 0; i < j; i++) {
      for (z = 0; z < j - i; z++) {
        if (result[z]>result[z + 1]) {
        k=result[z];
        result[z]=result[z + 1];
        result[z + 1]=k;
          }
      }
    } 
  cout << endl;
  cout << "Массив после метода пузырьков :" << endl;
  for (i = 0; i < j; i++)
    cout << "Результат [" << i+1 << "] = " << result[i] << endl;  
  return 0;
}