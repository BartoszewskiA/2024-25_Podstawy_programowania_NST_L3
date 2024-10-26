#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ile poteg wyliczyć: ";
    cin >> n;
    long x = 1;
    for (int i = 0; i < n; i++)
    {
        x = x * 2;
        cout << x << endl;
        
    }
    return 0;
}
