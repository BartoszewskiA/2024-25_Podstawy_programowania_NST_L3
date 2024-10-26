#include <iostream>

using namespace std;

int main()
{
    int x;
    int licznik = 0;
    int max, odp;
    cout << "Poziom trudnosci (1-4): ";
    cin >> odp;
    switch (odp)
    {
    case 1:
        max = 20;
        cout << "Zakres 0-20" << endl;
        break;
    case 2:
        max = 40;
        cout << "Zakres 0-40" << endl;
        break;
    case 3:
        max = 60;
        cout << "Zakres 0-60" << endl;
        break;
    case 4:
        max = 100;
        cout << "Zakres 0-100" << endl;
        break;

    default:
        max = 20;
        cout << "Zakres 0-20" << endl;
        break;
    }
    int szukana = rand() % max + 1;
    do
    {
        cout << "x=";
        cin >> x;
        licznik++;
        if (x > szukana)
            cout << "Za duzo" << endl;
        else if (x < szukana)
            cout << "za malo" << endl;
        else
            cout << "Trafiles w " << licznik << " probach";
    } while (x != szukana);
    return 0;
}