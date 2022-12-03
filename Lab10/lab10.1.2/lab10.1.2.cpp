//Завдання 1.2 варіант 13
//Обчислити кінетичну Е=mv^2/2 та потенційну Р=mgh енергії тіла заданої маси m,яке рухається на висоті h зі швидкістю v
#include <iostream>
using namespace std;


int main()
{
    int m, v, g, h, P;
    double E;
    setlocale(LC_ALL, "Russian");
    cout << "Введiть m = ";
    cin >> m;
    cout << "Введiть v = ";
    cin >> v;
    cout << "Введiть g = ";
    cin >> g;
    cout << "Введiть h = ";
    cin >> h;
    E = (m * v * v) / 2;
    P = m * g * h;
    cout << "Кiнетична енергiя = " << E << "\t Потенцiйна енергiя = " << P << endl;
    system("pause>>void");
    return 0;
}
