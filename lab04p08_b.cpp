#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int tab[1000];
int n = 0;

void wczytaj();
int maksimum();
int minimum();
double srednia();

int main()
{
    wczytaj();
    cout << "max=" << maksimum() << endl
         << "min=" << minimum() << endl
         << "srednia=" << srednia();
    return 0;
}

void wczytaj()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return;
    }
    string s;
    while (!plik.eof())
    {
        getline(plik, s);
        if (s.length() > 0)
        {
            tab[n] = stoi(s);
            n++;
        }
        // try
        // {
        //     tab[n] = stoi(s);
        //     n++;
        // }
        // catch (const std::exception &e)
        // {
        // }
    }
    plik.close();
}

int maksimum()
{
    int max = tab[0];
    for (int i = 0; i < n; i++)
        if (tab[i] > max)
            max = tab[i];
    return max;
}

int minimum()
{
    int min = tab[0];
    for (int i = 0; i < n; i++)
        if (tab[i] < min)
            min = tab[i];
    return min;
}

double srednia()
{
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += tab[i];
    return (double)suma / n;
}