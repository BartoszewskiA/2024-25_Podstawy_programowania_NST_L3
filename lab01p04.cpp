#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0;
    int dzialanie;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "wybierz działanie: \n(1-dodawanie, 2- odejnowanie, 3-mnozenie, 4-dzielenie): ";
    cin >> dzialanie;

    switch (dzialanie)
    {
    case 1:
        cout << "wynik = " << x + y;
        break;
    case 2:
        cout << "wynik = " << x - y;
        break;
    case 3:
        cout << "wynik = " << x * y;
        break;
    case 4:
        cout << "wynik = " << (double)x / y;
        break;
    default:
        cout << "nie wybano dzialania";
        break;
    }

    return 0;
}