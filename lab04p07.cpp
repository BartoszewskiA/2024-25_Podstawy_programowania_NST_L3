#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void wczytaj_plik(string tab[], int &n);
void zapisz_do_pliku(string tab[], int n);

int main()
{
    string tab[1000];
    int n = 0;
    wczytaj_plik(tab,n);
    zapisz_do_pliku(tab,n);
    return 0;
}

void wczytaj_plik(string tab[], int &n)
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return;
    }
    while (!plik.eof())
    {
        getline(plik, tab[n]);
        n++;
    }

    plik.close();
}

void zapisz_do_pliku(string tab[], int n)
{
    fstream plik;
    plik.open("dane.txt", ios::out);
    for (int i = 0; i < n; i++)
        if (tab[i].length() > 0)
            plik << tab[i] << endl;
    plik.close();
}
