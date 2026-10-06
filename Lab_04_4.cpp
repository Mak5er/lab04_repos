// Lab_04_4.cpp
// Рева Максим
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R, xp, xk, dx, x, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    const double PI = 4.0 * atan(1.0);

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << "     |"
         << setw(10) << "y" << "        |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -7.0 - R)
            y = R;
        else if (x <= -7.0 + R)
            y = R - sqrt(R * R - (x + 7.0) * (x + 7.0));
        else if (x <= -4.0)
            y = R;
        else if (x <= 0.0)
            y = -R / 4.0 * x;
        else if (x <= PI)
            y = sin(x);
        else
            y = x - PI;

        cout << "|" << setw(9) << setprecision(2) << x
             << "   |" << setw(12) << setprecision(3) << y
             << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
