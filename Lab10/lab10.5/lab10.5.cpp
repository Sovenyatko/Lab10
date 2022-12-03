
#include <iostream>
using namespace std;


int main()
{
    double P, y, d, e;
    cout << "y=";
    cin >> y;
    cout << "d=";
    cin >> d;
    cout << "e=";
    cin >> e;
    P = ((pow(sin(y), 2)) + 0.3 * d) / (pow(e, y) + log(d));
    cout << "P = " << P << endl;
    system("pause>void");
    return 0;

}