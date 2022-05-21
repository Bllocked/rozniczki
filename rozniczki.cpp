// rozniczki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
double funkcja(double y,double x)
{
    return -2 * y * tan(x);
}




int main()
{
    double pi = 2 * acos(0.0);
    double a, b;
    a = -pi / 3.;
    double kroki = 6.;
    b = pi / 4.;
    double h = (b -a) / kroki;
    double x, y,y1,x1;
    y = 1. / 4.;
    x = -pi / 3.;
    cout << "Metoda Eulera: \n";
    for (int i = 1; i <= kroki; i++)
    {
        y1 = y + h * funkcja(y, x);
        x1 = a + i * h;
        cout << "x" << i << " = " << x1;
        cout << " y" << i << " = " << y1;
        cout << endl;
        y = y1;
        x = x1;
    }
    cout << "Metoda Heuna: \n";
    y = 1. / 4.;
    x = -pi / 3.;
    for (int i = 1; i <= kroki; i++)
    {
        y1 = y + (h * ((funkcja(y, x) + funkcja(y + h * funkcja(y, x), x + h)) / 2.));
        x1 = a + i * h;
        cout << "x" << i << " = " << x1;
        cout << " y" << i << " = " << y1;
        cout << endl;
        y = y1;
        x = x1;
    }
}