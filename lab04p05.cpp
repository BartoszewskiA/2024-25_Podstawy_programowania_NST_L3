#include <iostream>
#include <string>
// dyze litery - 65-90 <- niepotrzene
// male liery  - 97-122
using namespace std;

int main()
{
    string s;
    int tablica_znakow[26] = {0};
    // a=0, b=1, c=2 ... z=25
    cout << "Podaj tekst: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]); // zamieniam wszystkie litery na male
    for (int i = 0; i < s.length(); i++)
        if ((int)s[i] >= 97 && (int)s[i] <= 122)
            tablica_znakow[(int)s[i] - 97]++;

    for (int i = 0; i < 26; i++)
        cout << (char)(i + 97) << ":" << tablica_znakow[i] << endl;
    return 0;
}