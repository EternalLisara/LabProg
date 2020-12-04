#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  srand(time(NULL));
  int rand_num[20];
  for (int i=0;i<20;i++)
  {  
    rand_num[i]=rand()%21 - 10;
    cout << "Massiv: " << "[" << i+1<<"] = "<< rand_num[i]<<endl;
    if (rand_num[i] >= 0)
    cout << "Положительные числа: " << rand_num[i];
    else 
    cout << "Отрицательные числа: " << rand_num[i];
  }
  return 0;
}