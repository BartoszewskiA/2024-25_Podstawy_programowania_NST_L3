#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    bool tab[50];
    int poz;
    for (int i = 0; i < 50; i++)
        tab[i] = true;
    int n = 0;
    do
    {
        do
        {
            poz = rand() % 49 + 1;
        } while (!tab[poz]); // tab[poz] == false
        tab[poz] = false;
        cout << poz << " ";
        n++;
    } while (n < 7);
    return 0;
}