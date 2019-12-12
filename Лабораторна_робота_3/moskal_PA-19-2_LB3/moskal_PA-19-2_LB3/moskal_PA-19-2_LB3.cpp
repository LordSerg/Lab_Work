#include <iostream>
using namespace std;
#include <ctime>
int main()
{
	
	//LB3
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "Введите номер программы:\n";
	cout << "1 -> ABS\n";
	cout << "2 -> Max0\n";
	cout << "3 -> AB\n";
	cout << "4 -> ABC\n";
	cout << "5 -> ABCD\n";
	cout << "6 -> HIT\n";
	cout << "7 -> HIT2\n";
	cout << "8 -> MENU\n";
	int programm;
	cin >> programm;
	switch (programm)
	{
	case(1):
	{//ABS
		double X;
		cout << "Input value 'X'\n";
		cin >> X;
		cout << "X = " << X << "\n";
		cout << "|" << X << "| = ";
		if (X < 0)
			X -= 2 * X;
		cout << X << "\n";
		break;
	}
	case(2):
	{//Max0
		int A, B;
		cout << "Input value 'A'\n";
		cin >> A;
		cout << "Input value 'B'\n";
		cin >> B;
		cout << "A = " << A << " B = " << B << "\n";
		if (A < B)
			cout << "Max(" << A << ", " << B << ") = " << B << "\n";
		else
			cout << "Max(" << A << ", " << B << ") = " << A << "\n";
		break;
	}
	case(3):
	{//AB
		int A, B;
		cout << "Input value 'A'\n";
		cin >> A;
		cout << "Input value 'B'\n";
		cin >> B;
		cout << "A = " << A << " B = " << B << "\n";
		if (A > B)
		{
			A += B;
			B = A - B;
			A -= B;
		}
		cout << "A = " << A << " B = " << B << "\n";
		break;
	}
	case(4):
	{//ABC
		int A, B, C;
		cout << "input value 'A'\n";
		cin >> A;
		cout << "input value 'B'\n";
		cin >> B;
		cout << "input value 'C'\n";
		cin >> C;
		cout << "A = " << A << " B = " << B << " C = " << C << "\n";
		if (A > B || A > C)
		{
			if (B < C)
			{
				A += B;
				B = A - B;
				A -= B;
			}
			else
			{
				A += C;
				C = A - C;
				A -= C;
			}
		}
		else if (A > C)
		{
			A += C;
			C = A - C;
			A -= C;
		}
		if (B > C)
		{
			C += B;
			B = C - B;
			C -= B;
		}
		cout << "A = " << A << " B = " << B << " C = " << C << "\n";
		break;
	}
	case(5):
	{//ABCD
		int A, B, C, D;
		cout << "Input value 'A'\n";
		cin >> A;
		cout << "Input value 'B'\n";
		cin >> B;
		cout << "Input value 'C'\n";
		cin >> C;
		cout << "Input value 'D'\n";
		cin >> D;
		cout << "A = " << A << " B = " << B << " C = " << C << " D = " << D << "\n";
		if (A > B || A > C || A > D)
		{
			if (B < C && B < D)
			{
				A += B;
				B = A - B;
				A -= B;
			}
			else if (C < B && C < D)
			{
				A += C;
				C = A - C;
				A -= C;
			}
			else
			{
				A += D;
				D = A - D;
				A -= D;
			}
		}
		if (B > C || B > D)
		{
			if (C < D)
			{
				B += C;
				C = B - C;
				B -= C;
			}
			else
			{
				B += D;
				D = B - D;
				B -= D;
			}
		}
		if (C > D)
		{
			D += C;
			C = D - C;
			D -= C;
		}
		cout << "A = " << A << " B = " << B << " C = " << C << " D = " << D << "\n";
		break;
	}
	case(6):
	{//HIT

		double R, x0, y0, x, y;
		R = 1 + rand() % 10;//R=[1,10]
		x0 = rand() % 21 - 10;
		y0 = rand() % 21 - 10;//x0,y0 = [-10;10]
		cout << "Input the coordinate 'x' of the point 'A'\n";
		cin >> x;
		cout << "Input the coordinate 'y' of the point 'A'\n";
		cin >> y;
		cout << "Point (" << x << ", " << y << ") ";
		if (R * R <= (x0 - x) * (x0 - x) + (y0 - y) * (y0 - y))
			cout << "does not enters ";
		else
			cout << "enters ";
		cout << "to the circle with center in (" << x0 << ", " << y0 << ") and radius " << R << "\n\n";
		break;
	}
	case(7):
	{//HIT2
		double width, height, x0, y0, x, y;
		//малюємо прямокутник із шириною width
		//і довжиною height
		//з початком у верхньому лівому кутку з координатами x0 та y0
		width = 1 + (rand() % 50);
		height = 1 + (rand() % 50);
		x0 = (rand() % 30) - 15;
		y0 = (rand() % 30) - 15;
		cout << "Input the coordinate 'x' of the point 'A'";
		cin >> x;
		cout << "Input the coordinate 'y' of the point 'A'";
		cin >> y;
		if ((x0 + width < x || x0 > x) && (y0 + height < y || y0 > y))
		{
			cout << "The point (" << x << ", " << y << ") doesn`t enter the rectangle:\n";
		}
		else
			cout << "The point (" << x << ", " << y << ") enters the rectangle:\n";
		cout << "Width = " << width << "\n";
		cout << "Height = " << height << "\n";
		cout << "Top - left vertex = (" << x0 << ", " << y0 << ")\n";
		break;
	}
	case(8):
	{//MENU
		cout << "Работает информационная система ЛИТа\n";
		cout << "1. Новость дня\n";
		cout << "2. Анекдот недели\n";
		cout << "3. Автора!!!\n";
		cout << "Введите соответствующий номер и нажмите ENTER\n";
		int x;
		cin >> x;
		switch (x)
		{
		case(1):
		{//новость
			cout << "Невероятно, но в этот момент на планете Марс проживает 0 человек!!!\n";
			break;
		}
		case(2):
		{//анекдот
			cout << "На собеседовании...\n"
				<< "НР: -Как бы вы могли описать себя ?\n"
				<< "Я : -Словами, но я приготовил танец.\n";
			break;
		}
		case(3):
		{//автора
			cout << "Автор этого деятища - Москаленко Сережа)\n";
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
	
	system("pause");
	return 0;
}