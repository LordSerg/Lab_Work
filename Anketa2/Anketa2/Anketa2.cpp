#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string n, th_n, otch, pol, birth_data, adress, telephone, studyplace, clas, h;
	cout << "Фамилия?= ";
	cin >> n;
	cout << "Имя?= ";
	cin >> th_n;
	cout << "Отчество?= ";
	cin >> otch;
	cout << "Пол?= ";
	cin >> pol;
	cout << "Дата рождения?= ";
	cin >> birth_data;
	cout << "Адресс?= ";
	cin >> adress;
	cout << "Номер телефона?= ";
	cin >> telephone;
	cout << "Место учебы?= ";
	cin >> studyplace;
	cout << "Класс?= ";
	cin >> clas;
	cout << "Хобби?= ";
	cin >> h;
	//cin>> n, th_n, otch, pol, birth_data, adress, telephone, studyplace, clas, h;
	cout << "              А Н К Е Т А\n";
	cout << "Фамилия\tИмя\tОтчество\n";
	cout << "-------\t---\t--------\n";
	cout << th_n<<"\t"<<n<<"\t"<<otch;
	cout << "\n";
	cout << "Пол\tДата рождения\tНомер телефона\n";
	cout << "---\t-------------\t--------------\n";
	cout << "\n";
	cout << pol<<"\t"<<birth_data<<"\t"<<telephone<<"\n";
	system("pause");
	return 0;
}