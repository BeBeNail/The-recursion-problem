#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

double f(double x, int n, double a1)
{
	if (n == 0)
		return 0.0;

	if (n == 1)
		return a1;

	if (n == 2)
		return a1 + ((1.0 / 3) * a1);

	return ((1.0 / (2 * n + 1)) * a1) + f(x, n - 1, a1);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, a1;
	int n;

	cout << "Введите значение x и значение n";
	cin >> x >> n;

	a1 = (x - 1) / (x + 1);

	cout << "Сумма " << n << " членов последовательности (при x = " << x << ") равна " << f(x, n, a1);

	return 0;
}

