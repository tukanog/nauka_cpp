#include <iostream>

using namespace std;

int ile, maks = 0;

int main()
{
    cout << "Podaj ile liczb: ";
    cin >> ile;
    int liczby[ile];

    for (int i = 0; i < ile; i++) {
        cout << "Podaj " << i + 1 << ". liczbę: ";
        cin >> liczby[i];
    }

    for (int i = 0; i < ile; i++) {
        if (liczby[i] > maks)
            maks = liczby[i];
    }

    cout << "Największa liczba z podanych to " << maks;

    return 0;
}
