#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int matrixA[5][5];
    int matrixT[5][5];
    int l1, l2;
    cout << "Матрица до: ";
    for (l1 = 0; l1 < 5; l1++) {
        for (l2 = 0; l2 < 5; l2++) {
            matrixA[l1][l2] = rand() % 40;
            cout << matrixA[l1][l2] << " ";
        }
        cout << "\n";
    }
    cout << "Транспонированая матрица: ";
    for (l2 = 0; l2 < 5; l2++) {
        for (l1 = 0; l1 < 5; l1++) {
            matrixT[l2][l1] = matrixA[l1][l2];
            cout << matrixT[l2][l1] << " ";
        }
        cout << "\n";
    }
    return 0; 
}