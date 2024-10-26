#include <iostream>

using namespace std;

int main()
{
    int n, x, suma = 0;
    cout << "n=";
    cin >> n;
    while (n > 0)
    {
        cout << "x=";
        cin >> x;
        if ((x < -100) || (x > 100))
            continue;
        suma += x;
        n--;
    }
    cout << "Suma=" << suma;
    return 0;
}