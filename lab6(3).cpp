#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    srand(time(NULL));
    float Massiv[20];
    int i;
    for (i = 0; i < 20; i++) {
        Massiv[i] = 0.01 * (rand() % 1001);
        cout << "Массив [" << i + 1 << "] = " << Massiv[i] << endl;
    }
    cout << "Элементы массива, которые больше своих соседей: ";
    for (i = 1; i < 19; i++) {
        if (Massiv[i] > Massiv[i - 1])
           if(Massiv[i] > Massiv[i+1])
              cout << "Элементы массива [" << i << "]" << Massiv[i] << endl;
    }
    return 0;
}