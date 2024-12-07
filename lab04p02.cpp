#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, imie, nazwisko;
    cout << "Przedstaw sie: ";
    getline(cin, s);
    int poz = s.find(' ');
   // int poz_2 = s.find(poz+1, ' ');
    if (poz > 0)
    {
        imie = s.substr(0, poz);
        nazwisko = s.substr(poz + 1); // od wskazanej pozycji do konca
    }
    else
    {
        imie = s;
        nazwisko = "NN";
    }

    cout << "Imie: " << imie << endl
         << "Nazwisko: " << nazwisko;

    return 0;
}