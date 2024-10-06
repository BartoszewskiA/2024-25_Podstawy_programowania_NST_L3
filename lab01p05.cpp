#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    if ((a < b + c) && (b < a + c) && (c < a + b))
        cout << "TAK";
    else
        cout << "NIE";
    return 0;
}