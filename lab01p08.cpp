#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 40; i++)
        cout << rand() << "\t";
    return 0;
}