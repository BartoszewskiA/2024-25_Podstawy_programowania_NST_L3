#include <iostream>
#include <math.h>

// dane - typu integer
using namespace std;

int kwadrat();
double pierwiastek();
int mnozenie();
double srednia_z_trzech();

int main()
{
    int wybor;
    do
    {
        cout << "1: kwadrat" << endl
             << "2: pierwiastek" << endl
             << "3: mnozenie" << endl
             << "4: srednia z 3 liczb" << endl
             << "0: wyjscie z programu" << endl
             << "wybierz dzialanie: ";
        cin >> wybor;
        switch (wybor)
        {
        case 0:
            return 0;
        case 1:
            cout << kwadrat();
            break;
        case 2:
            cout << pierwiastek();
            break;
        case 3:
            cout << mnozenie();
            break;
        case 4:
            cout << srednia_z_trzech();
            break;
        default:
            cout << "wybierz liczbe z zakresu 1 - 4";
        }
    } while (1);

    return 0;
}

int kwadrat()
{
    int x;
    cout << "x=";
    cin >> x;
    return x * x;
}

double pierwiastek()
{
    int x;
    cout << "x=";
    cin >> x;
    return sqrt(x);
}

int mnozenie()
{
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    return x * y;
}

double srednia_z_trzech()
{
    int a, b, c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    return (a + b + c) / 3.0;
}
