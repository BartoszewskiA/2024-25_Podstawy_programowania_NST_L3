#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int ile, x;
    int suma = 0;
    cout << "Ile liczb wylosowac: ";
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        x = rand() % 201 - 100;
        suma = suma + x;
        cout << x << "\t";
    }
    cout << endl;
    cout << "Srednia = " << (double)suma / ile;
    return 0;
}