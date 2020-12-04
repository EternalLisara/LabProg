#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
   srand(time(NULL));
  const int size = 20; 
  float massiv_prim[size];
  int sizeP, sizeM;
  cout << "Начальный массив: " << endl;
  int clock = 0;
  for (int i=0;i<=size;i++)
  {
    massiv_prim[i]=(0.01*(rand()%2001-1000));
    if (massiv_prim[i]>0)
      sizeP++;
    if (massiv_prim[i]<0)
      sizeM++;  
    cout << "["<<i+1<<"]" <<massiv_prim[i];
  }
  float MassivP[sizeP];
  float MassivM[sizeM];
  int k = 0, z = 0;
  cout << "MassivP" << endl;
  for (int i=0;i<=size;i++)
  {
    if (massiv_prim[i]<0)
    {
      MassivM[z]=massiv_prim[i];
      z++;
      cout << "[" << z+1 << "]" << MassivM[z];
    }
    else
    {
      MassivP[k]=massiv_prim[i];
      k++;
    }
  }
  return 0; 
}