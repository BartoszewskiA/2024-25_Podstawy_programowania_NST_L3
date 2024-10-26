#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[1000];
    int n;
    cout << "ile liczb wylosowac: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        tab[i] = rand() % 20001 - 10000;
    for (int i = 0; i < n; i++)
        cout << tab[i] << "  ";
    //---------------------------------------------

    int max = tab[0];
    int min = tab[0];

    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max)
            max = tab[i];
        if (tab[i] < min)
            min = tab[i];
    }
    cout << "Max=" << max << endl
         << "Min=" << min;
    return 0;
}