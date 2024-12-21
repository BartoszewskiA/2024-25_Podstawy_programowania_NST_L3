#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string PLIK_SZABLONU = "szablon.txt";
const string PLIK_WYNIKOWY = "zyczenia.txt";

string wczytaj_szablon(string nazwa);
void wczytaj_adresatow(string im[], string nazw[], int &poz);
void wygeneruj_plik(string nazwa, string imiona[], string nazwiska[], int poz, string szablon);

int main()
{
    string imiona[100];
    string nazwiska[100];
    int poz = 0;
    string szablon = wczytaj_szablon(PLIK_SZABLONU);
    wczytaj_adresatow(imiona, nazwiska, poz);
    wygeneruj_plik(PLIK_WYNIKOWY, imiona, nazwiska, poz, szablon);
    for (int i = 0; i < poz; i++)
        cout << imiona[i] << " " << nazwiska[i] << endl;
    return 0;
}

string wczytaj_szablon(string nazwa)
{
    fstream plik;
    plik.open(nazwa, ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return "";
    }
    string s;
    getline(plik, s);
    plik.close();
    return s;
}

void wczytaj_adresatow(string im[], string nazw[], int &poz)
// poz przekazane przez referencje
{
    string s1, s2;
    while (1)
    {
        cout << "Imie: ";
        getline(cin, s1);
        if (s1.empty())
            break;
        cout << "Nazwisko: ";
        getline(cin, s2);
        im[poz] = s1;
        nazw[poz] = s2;
        poz++;
    }
}
void wygeneruj_plik(string nazwa, string imiona[], string nazwiska[], int poz, string szablon)
{
    fstream plik;
    int poz_wstawienia = szablon.find('#');
    string wynik;
    plik.open(nazwa, ios::out);
    for (int i = 0; i < poz; i++)
    {
        wynik = szablon;
        wynik.replace(poz_wstawienia, 1, imiona[i]);

        plik << imiona[i] << " "
             << nazwiska[i] << endl;
        plik << wynik
             << endl
             << endl;
    }

    plik.close();
}