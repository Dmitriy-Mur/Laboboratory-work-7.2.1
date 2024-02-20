#include <iostream>
using namespace std;

double distance(double dimension, ...);

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите колличество измерений (1 - 4): ";
	int dimensional;
	cin >> dimensional;
	double x_a, y_a, z_a, w_a, x_b, y_b, z_b, w_b;
	switch (dimensional)
	{
		case 1:
		{
			cout << "Введите координаты точки A:\n";
			cout << "x_a = \n";
			cin >> x_a;
			cout << "Введите координаты точки B:\n";
			cout << "x_b = \n";
			cin >> x_b;

			cout << "A(" << x_a << "),\n";
			cout << "B(" << x_b << "),\n";
			cout << "|AB| = " << distance(1, x_a, x_b) << "\n";
			break;
		}
		case 2:
		{
			cout << "Введите координаты точки A:\n";
			cout << "x_a = ";
			cin >> x_a;
			cout << "y_a = ";
			cin >> y_a;
			cout << "Введите координаты точки B:\n";
			cout << "x_b = ";
			cin >> x_b;
			cout << "y_b = ";
			cin >> y_b;

			cout << "A(" << x_a << ", " << y_a << "),\n";
			cout << "B(" << x_b << ", " << y_b << "),\n";
			cout << "|AB| = " << distance(2, x_a, x_b, y_a, y_b) << "\n";
			break;
		}
		case 3:
		{
			cout << "Введите координаты точки A:\n";
			cout << "x_a = ";
			cin >> x_a;
			cout << "y_a = ";
			cin >> y_a;
			cout << "z_a = ";
			cin >> z_a;
			cout << "Введите координаты точки B:\n";
			cout << "x_b = ";
			cin >> x_b;
			cout << "y_b = ";
			cin >> y_b;
			cout << "z_b = ";
			cin >> z_b;

			cout << "A(" << x_a << ", " << y_a << ", " << z_a << "),\n";
			cout << "B(" << x_b << ", " << y_b << ", " << z_b << "),\n";
			cout << "|AB| = " << distance(3, x_a, x_b, y_a, y_b, z_a, z_b) << "\n";
			break;
		}
		case 4:
		{
			cout << "Введите координаты точки A:\n";
			cout << "x_a = ";
			cin >> x_a;
			cout << "y_a = ";
			cin >> y_a;
			cout << "z_a = ";
			cin >> z_a;
			cout << "w_a = ";
			cin >> w_a;
			cout << "Введите координаты точки B:\n";
			cout << "x_b = ";
			cin >> x_b;
			cout << "y_b = ";
			cin >> y_b;
			cout << "z_b = ";
			cin >> z_b;
			cout << "w_b = ";
			cin >> w_b;

			cout << "A(" << x_a << ", " << y_a << ", " << z_a << ", " << w_a << "),\n";
			cout << "B(" << x_b << ", " << y_b << ", " << z_b << ", " << w_b << "),\n";
			cout << "|AB| = " << distance(4, x_a, x_b, y_a, y_b, z_a, z_b, w_a, w_b) << "\n";
			break;
		}
		default:
		{
			cout << "Недопустимое значение!";
		}
	}
	return 0;
}

double distance(double dimension, ...)
{
	double* p = &dimension;
	double ans = 0;
	cout << "Процесс вычисления:\n";
	for (int i = 0; i < dimension * 2; i = i + 2)
	{
		ans = ans + pow(*(p + i + 1) - *(p + i + 2), 2);
		cout << "(" << *(p + i + 1) << " - " << *(p + i + 2) << ")^2 = (" << (*(p + i + 1) - *(p + i + 2)) << ")^2 = " << pow(*(p + i + 1) - *(p + i + 2), 2) << "\n";
	}
	return pow(ans, 0.5);
}
