#include <iostream>

using namespace std;

int *liczby, maks, ile_liczb;

int main()
{
    cout << "Podaj ile liczb chcesz wprowadzić: ";
    cin >> ile_liczb;
    liczby = new int [ile_liczb];

    for (int i = 0; i < ile_liczb; i++) {
        cout << "Podaj liczbę nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    maks = liczby[0];

    for (int i = 1; i < ile_liczb; i++) {
        if (liczby[i] > maks) maks = liczby[i];
    }

    delete [] liczby;

    cout << "Największa liczba z podanych to: " << maks;
}
