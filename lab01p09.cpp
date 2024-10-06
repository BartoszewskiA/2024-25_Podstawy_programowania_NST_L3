#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 7; i++)
        cout << rand() % 49 + 1 << "\t";

    return 0;
}