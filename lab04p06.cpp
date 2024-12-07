#include <iostream>
#include <string>
#include <fstream>

using namespace std;
// zmienne globalne
string tab[1000];
int n = 0;
int tablica_znakow[26] = {0};
// a=0, b=1, c=2 ... z=25
//--------------------
void wczytaj_plik();
void policz_litery_w_wierszu(string s);
void wypisz_wynik();

int main()
{
    wczytaj_plik();
    for (int i = 0; i < n; i++)
        policz_litery_w_wierszu(tab[i]);
    wypisz_wynik();
    return 0;
}

void wczytaj_plik()
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

void policz_litery_w_wierszu(string s)
{
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]); // zamieniam wszystkie litery na male
    for (int i = 0; i < s.length(); i++)
        if ((int)s[i] >= 97 && (int)s[i] <= 122)
            tablica_znakow[(int)s[i] - 97]++;
}

void wypisz_wynik()
{
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i + 1 << ": " << tab[i] << endl;
    // }
    for (int i = 0; i < 26; i++)
        cout << (char)(i + 97) << ":" << tablica_znakow[i] << endl;
}