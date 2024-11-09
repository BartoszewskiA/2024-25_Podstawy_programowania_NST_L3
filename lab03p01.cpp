#include <iostream>
#include <ctime>

using namespace std;

void Przedstaw_sie();
int kostka();
string moneta();
int losowanie_dowolne(int a, int b);

int main()
{
    srand(time(NULL));
    // wypisz_cos();
    for (int i = 0; i < 3; i++)
    {
        cout << kostka() << "  ";
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << moneta() << "  ";
    }
    cout << endl;
    int min,max;
    cout<<"minimum: ";
    cin>>min;
    cout<<"maksimum: ";
    cin>>max;
    for (int i = 0; i < 4; i++)
    {
        // cout <<losowanie_dowolne(3,20) << "  ";
        cout << losowanie_dowolne(min, max) << "  ";
    }
    return 0;
}

void wypisz_cos()
{
    cout << "To jest program symulujący rozne rodzaje losowania";
}

int kostka()
{
    int wynik = rand() % 6 + 1;
    return wynik;
    // return rand() % 6 + 1;
}

// string moneta()
// {
//     int wynik = rand() % 2; // 1 - orzel; 0 - reszka
//     string tekst;
//     if (wynik == 1)
//         tekst = "orzel";
//     else
//         tekst = "reszka";
//     return tekst;
// }

string moneta()
{
    int wynik = rand() % 2; // 1 - orzel; 0 - reszka
    if (wynik == 1)
        return "orzel";
    else
        return "reszka";

    // if (wynik == 1)
    //     return "orzel";
    // return "reszka";
}

int losowanie_dowolne(int a, int b)
// losuje liczbe z przedzialu <a,b>
{
    int wynik = rand() % (b - a + 1) + a;
    return wynik;
}
