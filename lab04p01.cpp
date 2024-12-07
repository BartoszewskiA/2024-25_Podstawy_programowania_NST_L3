#include <iostream>
#include <string>

using namespace std;

int main()
{
    string zdanie;
    cout << "Podaj zdanie: ";
    getline(cin, zdanie);
    for (int i = 0; i < zdanie.length(); i++)
        zdanie[i] = tolower(zdanie[i]);
    //------------------------------------
    zdanie[0] = toupper(zdanie[0]);  
    // pierwszy znak na pewno jest wielką literą
    for(int i=0; i<zdanie.length()-1; i++) 
    // przeglądamy do przedostatniego znaku
        if(zdanie[i]==' ')
            zdanie[i+1] = toupper(zdanie[i+1]);

    cout << "Po przeksztalceniu: " << zdanie;
    return 0;
}