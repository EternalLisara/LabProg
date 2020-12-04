#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    srand(time(NULL));
    const int line = 10;
    const int column = 20;
    int matrixA[line][column], buf[line][column], l1, l2;
    cout << "Матрица до: " << endl;
    for (l1 = 0; l1 < line; l1++) {
        for (l2 = 0; l2 < column; l2++) {
            matrixA[l1][l2] = rand() % 10;
            cout << matrixA[l1][l2] << " ";
        }
        cout << "\n";
    }
    for (l1 = 0; l1 < line; l1 += 2) {
        if (l1 == 0) {
            for (l2 = 0; l2 < column; l2++) {
                buf[l1][l2] = matrixA[l1 + 1][l2];
                buf[l1 + 1][l2] = matrixA[l1][l2];
            }
        }
        if (l1 == (line - 1)) {
            for (l2 = 0; l2 < column; l2++) {
                buf[line][l2] = matrixA[line - 1][l2];
                buf[line - 1][l2] = matrixA[line][l2];
            }
        }
        else {
            for (l2 = 0; l2 < column; l2++) {
                buf[l1][l2] = matrixA[l1 + 1][l2];
                buf[l1 + 1][l2] = matrixA[l1][l2];
            }
        }
    }
    cout << "Матрица после: " << endl;
    for (l1 = 0; l1 < line; l1++) {
        for (l2 = 0; l2 < column; l2++)
            cout << buf[l1][l2] << " ";
        cout << "\n";
    }
    return 0;
}