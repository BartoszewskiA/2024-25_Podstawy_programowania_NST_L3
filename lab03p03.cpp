#include <iostream>
#include <ctime>

using namespace std;

int tab[100];

void losuj(int a, int b);
void wypisz();
int wyzeruj(int x);

int main()
{
    srand(time(NULL));
    int x;
    losuj(1, 20);
    wypisz();
    cout << "jaka liczbe wyzerowac: ";
    cin >> x;
    cout << "Wyzerowano: " << wyzeruj(x) << " elementow"<<endl;
    wypisz();

    return 0;
}

void losuj(int a, int b)
{
    for (int i = 0; i < 100; i++)
        tab[i] = rand() % (b - a + 1) + a;
}

void wypisz()
{
    cout << "----------------------------------------\n";
    for (int i = 0; i < 100; i++)
        cout << tab[i] << " ";
    cout << "\n----------------------------------------\n";
}

int wyzeruj(int x)
{
    int licznik = 0;
    for (int i = 0; i < 100; i++)
        if (tab[i] == x)
        {
            tab[i] = 0;
            licznik++;
        }
    return licznik;
}