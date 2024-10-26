#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int wyniki[7] = {0};
    int x;
    bool powtorzenie;

    int i = 0;
    while (i < 7)
    {
        x = rand() % 49 + 1;
        powtorzenie = false;
        for (int j = 0; j < i; j++)
        {
            if (x == wyniki[j])
                powtorzenie = true;
        }
        if(powtorzenie) continue;
        wyniki[i]=x;
        i++;    
    }
    cout << "Wylosowano: ";
    for (int i = 0; i < 7; i++)
        cout << wyniki[i] << " ";
    return 0;
}