#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    int nr = 0;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        cout << ++nr << ":" << s << endl;
    }
    plik.close();
    return 0;
}