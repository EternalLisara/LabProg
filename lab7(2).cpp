#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  srand(time(NULL));
  int randNUM[15];
  int temp,j,clock;
  cout << "Начальный массив: ";
  for (int i=0;i<15;i++){
    randNUM[i]=rand()%11;
    cout << "[" << i+1 << "] " << randNUM[i] << endl ;
  }
  cout << "Конечный массив: ";
  for (int j = 0; j < 15; j++) {  
    cout << "[" << j+1 << "]" << randNUM[j] << endl;
    int raz;
    raz = 15;
    for (int k = j+1; k < 15; k++) {
      if (randNUM[j] == randNUM[k]) {
        for (int z = k; z < raz - 1; z++) {
          randNUM[z] = randNUM[z + 1];
        }
        raz = raz - 1;
      }
    }
  }
  return 0;
}