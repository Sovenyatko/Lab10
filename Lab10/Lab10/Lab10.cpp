//Завдання 1.1 варіант 13
//Обчислити довжину кола i площу круга за заданим дiаметром
#include <iostream>

using namespace std;
int main()

{
	double d, R, S, l;
	const double PI = 3.14;
	setlocale(LC_ALL, "Russian");
	cout << "Введiть Дiаметр = ";
	cin >> d;
	l = PI * d;
	S = PI * ((d / 2) * (d / 2));
	cout << " Довжина кола = " << l << "\t Площа круга =  : " << S << endl;
	system("pause>>void");
	return 0;
}