#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int programm;
	cout << "Введите номер программы:\n";
	cout << "1 -> SUM\n";
	cout << "2 -> PRODUCT\n";
	cout << "3 -> MAX\n";
	cout << "4 -> CountOdd\n";
	cout << "5 -> Parrot2\n";
	cout << "6 -> FIBO\n";
	cout << "7 -> FACTOR\n";
	cout << "8 -> HIT2\n";
	cin >> programm;
	switch (programm)
	{
	case(1):
	{//SUM
		int a, sum = 0,i=1;
		cout << "Введите последовательность чисел (0 - конец)";
		cout << "a[0] = ";
		//cin >> sum;
		while (cin >> a && a != 0)
		{
			cout << "a[" << i++ << "] = ";
			sum += a;
		}
		cout <<"Сума всех чисел = "<< sum<<"\n";
		break;
	}
	case(2):
	{//PRODUCT
		int a, P = 1, i = 1;
		cout << "Введите последовательность чисел (0 - конец)\n";
		cout << "a[0] = ";
		//cin >> sum;
		while (cin >> a && a != 0)
		{
			cout << "a[" << i++ << "] = ";
			P *= a;
		}
		cout << "Произвидение всех чисел = " << P<<"\n";
		break;
	}
	case(3):
	{//MAX
		int a, max, i = 2;
		cout << "Введите последовательность чисел (0 - конец)\n";
		cout << "a[0] = ";
		cin >> max;
		cout << "a[1] = ";
		while (cin >> a && a != 0)
		{
			cout << "a[" << i++ << "] = ";
			if (max < a)
				max = a;
		}
		cout << "Максимальное число = " << max << "\n";
		break;
	}
	case(4):
	{//CountOdd
		int a, counter=0, i = 2;
		cout << "Введите последовательность чисел (0 - конец)\n";
		cout << "a[0] = ";
		while (cin >> a && a != 0)
		{
			cout << "a[" << i++ << "] = ";
			if (a % 2 == 1)
				counter++;
		}
		cout << "Количество нечетных чисел = " << counter << "\n";
		break;
	}
	case(5):
	{//Parrot2
		char text[100];
		cin.getline(text, 100);
		cout << "Введите какой - либо текст\n";
		cin.getline(text, 100);
		while (text[0]!='\0')
		{	
			cout << "Введите какой - либо текст\n";
			cin.getline(text, 100);
			cout << text << endl;
		}
		break;
	}
	case(6):
	{//FIBO
		double x0 = 0, x1 = 1;
		int N;
		cout << "Введите номер члена поледовательности Фибоначи\n";
		cin >> N;
		for(int i=0;i < N;i++)
		{
			x1 += x0;
			x0 = x1 - x0;
		}
		cout <<"F("<<N<<") = "<<x0<<endl;
		break;
	}
	case(7):
	{//FACTOR
		double x=1;
		int n;
		cout << "Введите целое положительное число\n";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			x *= i;
		}
		cout << n << "! = " << x<<endl;
		break;
	}
	case(8):
	{//HIT2
		srand(time(0));
		double x0, y0, x, y, R,delta;
		int i = 0;
		delta = 0;
		x0 = 10 - (rand() % 20);
		y0 = 10 - (rand() % 20);
		R = (rand() % 9)+1;
		cout << "Введите Х: ";
		cin >> x;
		cout << "Введите У: ";
		cin >> y;
		delta = R - sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
		if (delta < 0)
		{
			cout << "Холодно\n";
			while (delta < 0)
			{
				cout << "Введите Х: ";
				cin >> x;
				cout << "Введите У: ";
				cin >> y;
				i++;
				if (delta > R - sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0)))
					cout << "Холоднее\n";
				else
					cout << "Теплее\n";
				delta = R - sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
			}
		}
		cout << "Да Вы везунчик!\n";
		cout << "Вы попали в круг с центром в т. ("<<x0<<", "<<y0<<") и радиусом = "<<R<<"\n";
		cout << "При этом сделав всего " << i << " ошибок \n";
		break;
	}
	default:
		break;
	}
	system("pause");
	return 0;
}