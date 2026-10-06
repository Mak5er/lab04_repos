// Lab_04_6.cpp
// Рева Максим
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 23
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double S, P;
    int i, k;

    // 1) спосіб: while всередині while
    S = 0;
    i = 1;
    while (i <= 15)
    {
        P = 1;
        k = 1;
        while (k <= i)
        {
            P *= sqrt(k);
            k++;
        }
        S += (sin(10.0 * i) + cos(10.0 * i)) / P;
        i++;
    }
    cout << S << endl;

    // 2) спосіб: do-while всередині do-while
    S = 0;
    i = 1;
    do {
        P = 1;
        k = 1;
        do {
            P *= sqrt(k);
            k++;
        } while (k <= i);
        S += (sin(10.0 * i) + cos(10.0 * i)) / P;
        i++;
    } while (i <= 15);
    cout << S << endl;

    // 3) спосіб: for++ всередині for++
    S = 0;
    for (i = 1; i <= 15; i++)
    {
        P = 1;
        for (k = 1; k <= i; k++)
        {
            P *= sqrt(k);
        }
        S += (sin(10.0 * i) + cos(10.0 * i)) / P;
    }
    cout << S << endl;

    // 4) спосіб: for-- всередині for--
    S = 0;
    for (i = 15; i >= 1; i--)
    {
        P = 1;
        for (k = i; k >= 1; k--)
        {
            P *= sqrt(k);
        }
        S += (sin(10.0 * i) + cos(10.0 * i)) / P;
    }
    cout << S << endl;

    return 0;
}
