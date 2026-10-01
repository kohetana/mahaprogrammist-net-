// 1labaaa.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/************************
 * Автор: Кучина М. А.  *
 * Дата : 16.09.2026    *
 * Вариант 2            *
 * Название : 1 лаба    *
 ************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
  double a;
  double b;
  double c; 
  const int precisionValue = 6; 
  double Pi = 3.14;
  double degreeToRadian = Pi / 180.0; 
  double P;
  double g;
  double arg;
  double alpha;
  double k;
  double x1;
  double x2;
  double x3;
	
  cout << "Enter a: ";
  cin >> a;

  cout << "Enter b: ";
  cin >> b;

  cout << "Enter c: ";
  cin >> c;
	
  P = b / a;
  g = c / a;

  arg = -g / (2.0 * sqrt(pow(-P / 3.0, 3.0)));
  alpha = acos(arg);

  k = 2.0 * sqrt(-P / 3.0);

  x1 = k * cos(alpha / 3.0);
  x2 = -k * cos((alpha + Pi) / 3.0);
  x3 = -k * cos((alpha - Pi) / 3.0);

	
  cout.precision(precisionValue);
  cout << fixed;
  cout << "x1 = "   << x1 
	   << "x2 = "   << x2 
	   << "\nx3 = " << x3;

  return 0;
}
