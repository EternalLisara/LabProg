#include <set>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // f(x) = 1/((0.5 + 0.1 * x * x * x) * sqrt(x))
    double a = 0.1, b = 2.1, I1, I2;
    int N;
    cout << "Введите N (N = 10, N = 100, N = 1000)";
    cin >> N;
    float h = (b - a) / N; 
    vector<float> MassivA;
    int i = 0;
    while (a <= b) {
        MassivA.push_back(1/((0.5 + 0.1 * a * a *a) * sqrt(a)));
        a += h;
        i++;
    }
    i = 0;
    for (float buffer : MassivA) {
        cout << " [" << i + 1 << "]  " << buffer << endl;
        i++;
    }
    // I1 = h * (a[0]/2 + a[1] + a[2]...+a[N-1]+a[N]/2)
    i = 0;
    for (float buf1 : MassivA) {
        if (i == 0)
            I1 += (buf1 / 2);
        if (i == N - 1)
            I1 += (buf1 / 2);
        if (i != 0)
        {
            if (i != N - 1)
            {
                I1 += buf1;
            }
        }
        i++;
    }
    I1 *= h;
    cout << "Интеграл формулой трапеции: " << I1;
    // I2 = (h / 3) * (a[0] + a[N] + 4 * (a[1] + a[3] + ... a[N-1]) + 2 * (a[2] + a[4] + ... + a[N-2]))
    i = 0;
    for (float buf2 : MassivA) {
        if (i == 0)
            I2 += buf2;
        if (i == (N - 1))
            I2 += buf2;
        if (i % 2 == 0) {
            if (i != 0) {
                if (i != N - 1) {
                    I2 += (2 * buf2);
                }
            }
        }
        if (i % 2 == 1) {
            if (i != N - 1) {
                I2 += (4 * buf2);
            }
        }
        i++;
    }
    I2 *= (h / 3);
    cout << "Интеграл формулой Симпсона: " << I2;
    return 0;
}