// Lab_04_5.cpp
// Рева Максим
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру.
// Варіант 23
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double x, y, R;

    cout << "R = "; cin >> R;

    // 1 спосіб: введення координат 10 точок з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((x >= 0 && x <= R && y >= 0 && y <= R) ||
            (x >= -R && x <= 0 && y >= -R && y <= 0) ||
            (x >= -R && x <= 0 && y >= 0 && y <= R && ((x + R) * (x + R) + (y - R) * (y - R) >= R * R)) ||
            (x >= 0 && x <= R && y >= -R && y <= 0 && ((x - R) * (x - R) + (y + R) * (y + R) >= R * R)))
            cout << "так" << endl;
        else
            cout << "ні" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: генерація 10 точок з випадковими координатами в [-2R, 2R]
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; i++)
    {
        x = 4.0 * R * rand() / RAND_MAX - 2.0 * R;
        y = 4.0 * R * rand() / RAND_MAX - 2.0 * R;

        if ((x >= 0 && x <= R && y >= 0 && y <= R) ||
            (x >= -R && x <= 0 && y >= -R && y <= 0) ||
            (x >= -R && x <= 0 && y >= 0 && y <= R && ((x + R) * (x + R) + (y - R) * (y - R) >= R * R)) ||
            (x >= 0 && x <= R && y >= -R && y <= 0 && ((x - R) * (x - R) + (y + R) * (y + R) >= R * R)))
            cout << setw(8) << setprecision(4) << x << "  "
                 << setw(8) << setprecision(4) << y << "  " << "так" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "  "
                 << setw(8) << setprecision(4) << y << "  " << "ні" << endl;
    }

    return 0;
}
