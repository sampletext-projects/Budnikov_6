#include <iostream>

using namespace std;

double S(double l1, double l2, double h)
{
	double s = (l1 + l2) / 2 * h;
	return s;
}

int main()
{
	setlocale(LC_ALL, "russian");

	double l11, l12, h1;
	double l21, l22, h2;
	double s1, s2;

	cout << "Введите первое основание трапеции №1: ";
	cin >> l11;
	cout << "Введите второе основание трапеции №1: ";
	cin >> l12;
	cout << "Введите высоту трапеции №1: ";
	cin >> h1;

	cout << "Введите первое основание трапеции №2: ";
	cin >> l21;
	cout << "Введите второе основание трапеции №2: ";
	cin >> l22;
	cout << "Введите высоту трапеции №2: ";
	cin >> h2;

	s1 = S(l11, l12, h1);
	s2 = S(l21, l22, h2);
	cout << "S1: " << s1 << ", S2: " << s2 << "\n";
	if (s1 > s2)
	{
		cout << "Первая трапеция больше\n";
	}
	else
	{
		cout << "Вторая трапеция больше\n";
	}

	system("pause");

	return 0;
}
