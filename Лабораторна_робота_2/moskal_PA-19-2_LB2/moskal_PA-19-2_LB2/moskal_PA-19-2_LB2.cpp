#include <iostream>
using namespace std;

int main()
{
	//LB2
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер программы:\n";
	cout << "1 -> ANKETA2\n";
	cout << "2 -> Guess\n";
	cout << "3 -> HELLO2\n";
	cout << "4 -> HELLO3\n";
	cout << "5 -> Parrot\n";
	cout << "6 -> SWAP3\n";
	cout << "7 -> SWAP4\n";
	int programm;
	cin >> programm;
	switch (programm)
	{
	case(1):
	{//ANKETA2
		char n[50], th_n[50], otch[50], pol[50], birth_data[50], adress[50], telephone[50], studyplace[50], h[50];
		cout << "Фамилия?= ";
		cin.getline(n, 50);
		cin.getline(n, 50);
		cout << "Имя?= ";
		cin.getline(th_n, 50);
		cout << "Отчество?= ";
		cin.getline(otch, 50);
		cout << "Пол?= ";
		cin.getline(pol, 50);
		cout << "Дата рождения?= ";
		cin.getline(birth_data, 50);
		cout << "Адресс?= ";
		cin.getline(adress, 50);
		cout << "Номер телефона?= ";
		cin.getline(telephone, 50);
		cout << "Место учебы?= ";
		cin.getline(studyplace, 50);
		cout << "Класс?= ";
		//cin >> clas;
		char clas[500];
		cin.getline(clas, 500);
		cout << "Хобби?= ";
		cin >> h;
		//cin>> n, th_n, otch, pol, birth_data, adress, telephone, studyplace, clas, h;
		cout << "\t\t\t\t\t              А Н К Е Т А\n";
		cout << "\t\t\t\t\t Фамилия\tИмя\tОтчество\n";
		cout << "\t\t\t\t\t -------\t---\t--------\n";
		cout << "\t\t\t\t\t " << th_n << "\t\t" << n << "\t" << otch;
		cout << "\t\t\t\t\t \n";
		cout << "\t\t\t\t\t Пол\t\tДата рождения\tНомер телефона\n";
		cout << "\t\t\t\t\t ---\t\t-------------\t--------------\n";
		cout << "\t\t\t\t\t \n";
		cout << "\t\t\t\t\t " << pol << "\t\t" << birth_data << "\t\t" << telephone << "\n";
		system("pause");
		break;
	}
	case(2):
	{//Guess
		double n;
		//(x^2 + 8)*2 - формула
		cout << "Загадайте число\n";
		cout << "Возведите это число в квадрат\n";
		cout << "К получившемуся добавте 8\n";
		cout << "Умножте сумму на 2\n";
		cout << "Что получилось?\n";
		cin >> n;
		//раскладываем все множетели числа n:
		cout << "Ваше число = " << sqrt((n-16)/2)<<" (ну или "<<-sqrt((n - 16) / 2)<<")\n";
		break;
	}
	case(3):
	{//HELLO2
		cout << "Как вас зовут по имени?\n";
		char c[50];
		cin>>c;
		cout << "Привет, " << c << "!\n";
		break;
	}
	case(4):
	{//HELLO3
		char c[50], uch[100];
		int age;
		cout << "Как Вас зовут по имени?\n";
		cin>>c;
		cout << "Сколько Вам лет?\n";
		cin>>age;
		cout << "Где Вы учитесь?\n";
		cin>>uch;
		cout << "Привет, " << c << "!\n";
		cout << "Поздравляю Вас, Ваш возраст - всего лишь "<<age<<" лет, а вы уже изучаете компьютер!\n";
		cout << uch << " будет гордиться Вами!";
		break;
	}
	case(5):
	{//Parrot
		cout << "Скажите что-то оригинальное:?\n";
		char c[100];
		cin.getline(c, 100);
		cin.getline(c, 100);
		cout << c;
		break;
	}
	case(6):
	{//SWAP3
		double a, b, c,x;
		cout << "Введите число 'A'\n";
		cin >> a;
		cout << "Введите число 'B'\n";
		cin >> b;
		cout << "Введите число 'C'\n";
		cin >> c;
		cout << "A = " << a << "; B = " << b << "; C = " << c << "\n";
		x = c;
		c = b;
		b = a;
		a = x;
		cout << "A = " << a << "; B = " << b << "; C = " << c << "\n";
		break;
	}
	case(7):
	{//SWAP4
		double a, b, c, d, x;
		cout << "Введите число 'A'\n";
		cin >> a;
		cout << "Введите число 'B'\n";
		cin >> b;
		cout << "Введите число 'C'\n";
		cin >> c;
		cout << "Введите число 'D'\n";
		cin >> d;
		cout << "A = " << a << "; B = " << b << "; C = " << c << "; D = " << d << "\n";
		x = d;
		d = c;
		c = b;
		b = a;
		a = x;
		cout << "A = " << a << "; B = " << b << "; C = " << c << "; D = " << d << "\n";
		break;
	}
	default:
		break;
	}
	system("pause");
	return 0;
}