#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    srand(time(NULL));
    const int N = 5;
    float matrix[N][N], sum[N];
    int l1, l2;
    cout << "Матрица до: ";
    for (l1 = 0; l1 < N; l1++) {
        for (l2 = 0; l2 < N; l2++) {
            matrix[l1][l2] = 0.001 * (rand() % 100);
            sum[l1] += matrix[l1][l2];
            cout << matrix[l1][l2] << " ";
        }
        cout << "\n";
    }
    cout << "Матрица после: ";
    for (l1 = 0; l1 < N; l1++) {
        for (l2 = 0; l2 < N; l2++) {
            matrix[l1][l2] = matrix[l1][l2] / sum[l1];
            cout << matrix[l1][l2] << " ";
        }
        cout << endl;
    }
    return 0;
}