// Lab_04_1.cpp
// Рева Максим
// Лабораторна робота № 4.1
// Цикли.
// Варіант 23
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cout << "N = "; cin >> N;

    double S = 0;
    int i = 3;

    // 1) спосіб: while
    while (i <= N)
    {
        S += (cos(i / 2.0) + sin(2.0 * i)) / (1.0 + sin(cos(i)));
        i++;
    }
    cout << S << endl;

    // 2) спосіб: do-while
    S = 0;
    i = 3;
    do {
        S += (cos(i / 2.0) + sin(2.0 * i)) / (1.0 + sin(cos(i)));
        i++;
    } while (i <= N);
    cout << S << endl;

    // 3) спосіб: for++
    S = 0;
    for (i = 3; i <= N; i++)
    {
        S += (cos(i / 2.0) + sin(2.0 * i)) / (1.0 + sin(cos(i)));
    }
    cout << S << endl;

    // 4) спосіб: for--
    S = 0;
    for (i = N; i >= 3; i--)
    {
        S += (cos(i / 2.0) + sin(2.0 * i)) / (1.0 + sin(cos(i)));
    }
    cout << S << endl;

    return 0;
}
