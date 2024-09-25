// lab_04_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
    double x, y, R;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R = "; cin >> R;
        if ((x >= -2 * R && x <= 0 && y >= 0 && y <= 2 * R && R > 0 && pow((x + R), 2) + pow((y - R), 2) <= pow(R, 2)) ||
            (y <= 0 && y >= -R && x >= 0 && x <= 2 * R && R > 0))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }


    cout << endl << fixed;
    cout << "--------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << "    |"
        << setw(7) << "y" << "    |"
        << setw(7) << "R" << "    |"
        << setw(10) << "yes/no" << "  |" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < 10; i++)
    {
        R = rand() * 20.0 / RAND_MAX;
        x = -2 * R + rand() * (2 * R -(-2 * R)) / RAND_MAX;
        y = -2 * R + rand() * (2 * R - (-2 * R)) / RAND_MAX;
        

        if ((x >= -2 * R && x <= 0 && y >= 0 && y <= 2 * R && R > 0 && pow((x + R), 2) + pow((y - R), 2) <= pow(R, 2)) ||
            (y <= 0 && y >= -R && x >= 0 && x <= 2 * R && R > 0))
            cout << "|" << setw(10) << x << " |"
            << setw(10) << y << " |"
            << setw(10) << R << " |"
            << " " << setw(10) << "yes" << " |" << endl;
        else
            cout << "|" << setw(10) << setprecision(4) << x << " |"
            << setw(10) << setprecision(4) << y << " |"
            << setw(10) << setprecision(4) << R
            << " |" << setw(10) << "no" << "  |" << endl;
    }
    cout << "--------------------------------------------------" << endl;
    cin.get();
    return 0;
}