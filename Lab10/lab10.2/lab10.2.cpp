//Завдання 2 варіант 13
// Задача про трикутник.
//Трикутник задано координатами вершин A(0; 0), B(i; i - 1), C(-i; i + 1), де і – номер варіанта.
//Обчислити висоту  та медіану


#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int Xa, Ya, Xb, Yb, Xc, Yc;
    double AB, BC, CA, Ma, Hb;
    cout << "Введiть Xa = ";
    cin >> Xa;
    cout << "Введiть Xb = ";
    cin >> Xb;
    cout << "Введiть Xc = ";
    cin >> Xc;
    cout << "Введiть Ya = ";
    cin >> Ya;
    cout << "Введiть Yb = ";
    cin >> Yb;
    cout << "Введiть Yc = ";
    cin >> Yc;
    AB = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
    cout << "AB = " << AB << endl;
    BC = sqrt(pow(Xc - Xb, 2) + pow(Yc - Yb, 2));
    cout << "BC = " << BC << endl;
    CA = sqrt(pow(Xa - Xc, 2) + pow(Ya - Yc, 2));
    cout << "CA = " << CA<<endl;

    Hb = sqrt(pow(BC, 2) - pow(AB / 2, 2));
    cout << "Hb =" << Hb<< endl;

    Ma = sqrt(pow(BC, 2) - pow(CA / 2, 2));
    cout << "Ma = " << Ma;
    cin >> Ma;


    system("pause>void");
    return 0;
}