// 1labaaa.cpp : This file contains the 'main' function. Program execution begins and ends there.
/************************
 * Author: Kuchina M. A. *
 * Date  : 16.09.2026    *
 * Variant 2             *
 * Title : Lab 1         *
 ************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    const double a = 0.52;
    const double b = -3.552;
    const double c = 3.24;
    const double Pi = 3.14;

    double P;
    double g;
    double arg;
    double alpha;
    double k;
    double x1;
    double x2;
    double x3;

    
    P = b / a;
    g = c / a;

    arg = -g / (2.0 * sqrt(pow(-P / 3.0, 3.0)));
    alpha = acos(arg);

    k = 2.0 * sqrt(-P / 3.0);

    x1 = k * cos(alpha / 3.0);
    x2 = -k * cos((alpha + Pi) / 3.0);
    x3 = -k * cos((alpha - Pi) / 3.0);

    
    cout.precision(6);
    cout << fixed;
    cout << "x1 = " << x1 << endl
        << "x2 = " << x2 << endl
        << "x3 = " << x3 << endl;

    return 0;
}