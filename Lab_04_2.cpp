// Lab_04_2.cpp
// Рева Максим
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, dx, x, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << "     |"
         << setw(10) << "y" << "        |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = x * x * sin(4.0 * x / 3.0);
        if (x < -5.0)
            B = 1.0 / tan(x);
        else if (x <= 0.0)
            B = 4.0 - (x * x) / 2.0;
        else
            B = log10(x * x) - (4.0 * x) / 3.0;

        y = A + B;
        cout << "|" << setw(9) << setprecision(2) << x
             << "   |" << setw(12) << setprecision(3) << y
             << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
