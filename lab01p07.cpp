#include <iostream>
using namespace std;

int main()
{
    int ile;
    cout << "Ile liczb wypisac: ";
    cin >> ile;

    for (int i = 0; i < ile; i++)
        cout << i<<"\t";

    return 0;
}