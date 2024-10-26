#include <iostream>

using namespace std;

int main()
{
    int n, x;
    int tab[100];
    cout << "n=";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cout << "x=";
        cin >> x;
        if ((x < -100) || (x > 100))
            continue;
        tab[i] = x;
        i++;
    }

    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    return 0;
}