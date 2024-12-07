#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string tab[1000];

int main()
{
    fstream plik;
    int n = 0;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, tab[n]);
        n++;
    }
    plik.close();

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << tab[i] << endl;
    }
    return 0;
}