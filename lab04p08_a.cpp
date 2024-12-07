#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    srand(time(NULL));
    fstream plik;
    int ile, x;
    cout << "Ile liczb wylosowac: ";
    cin >> ile;
    plik.open("dane.txt", ios::out);
    for (int i = 0; i < ile-1; i++)
    {
        x = rand() % 201 - 100;
        plik << x << endl;
    }
    x = rand() % 201 - 100;
    plik << x;
    plik.close();
    return 0;
}