#include <iostream>
using namespace std;
int main()
{//LB5, variant 15
	setlocale(LC_ALL, "Russian");
	cout << "Вариант 15\n";
	int n = 0;
	double x = 0, SuperSum = 0;
	cout << "Введите n (натуральное): ";
	cin >> n;
	cout << "Введите x (действительное): ";
	cin >> x;
	double fuctor, fuctor1, pow= x/2;
	for (int s = 0; s <= n; s++)
	{
		fuctor = s;
		for (int i = fuctor - 1; i >= 1; i--)
		{
			fuctor *= i;
		}
		if (fuctor == 0)
			fuctor = 1;
		fuctor1 = n+s;
		for (int i = fuctor1 - 1; i >= 1; i--)
		{
			fuctor1 *= i;
		}
		if (fuctor1 == 0)
			fuctor1 = 1;
		pow = x / 2;
		for (int i = 0; i < 2*s+n - 1; i++)
			pow *= x/2;
		SuperSum += (1 / (fuctor * fuctor1)) * (pow);
	}
	cout << "Сумма = " << SuperSum << endl;
	system("pause");
	return 0;
}