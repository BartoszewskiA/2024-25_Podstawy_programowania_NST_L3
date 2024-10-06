#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0;
    int dzialanie;
    double wynik;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "wybierz działanie: (1-dodawanie, 2- odejnowanie)";
    cin >> dzialanie;

    // if (dzialanie == 1)
    //     wynik = x + y;
    // else
    //     wynik = x - y;

    if (dzialanie == 1)
    {
        wynik = x + y;
        cout << "wynik: " << wynik;
    }
    else if (dzialanie == 2)
    {
        wynik = x - y;
        cout << "wynik: " << wynik;
    }
    else
        cout << "Nie wybrano dzilana"; 
    return 0;
}