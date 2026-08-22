#include <iostream>
#include <cmath>

using namespace std;

int ile, ile_liczb = 0;
float suma = 0, srednia, roznica;

int main()
{
    cout << "Podaj ile liczb: ";
    cin >> ile;
    float liczby[ile];

    for (int i = 0; i < ile; i++) {
        cout << "Podaj " << i + 1 << ". liczbę: ";
        cin >> liczby[i];
        suma += liczby[i];
    }

    srednia = suma / ile;
    cout << "Średnia wynosi " << srednia << endl;;

    roznica = abs(srednia - liczby[0]);

    for (int i = 1; i < ile; i++) {
        if (abs(srednia - liczby[i]) < roznica) {
            roznica = abs(srednia - liczby[i]);
            ile_liczb++; // początek kodu od AI
        }
    }

    // cout << "Liczba najbliższa średniej podanych liczb to " << liczby[ktora_liczba]; co napisałem sam. Niestety to wyznacza tylko jedną liczbę

    if (ile_liczb == 1)
        cout << "Liczba najblizsza sredniej to: ";
    else
        cout << "Liczby najblizsze sredniej to: ";

    for (int i = 0; i < ile; i++) {
        if (abs(srednia - liczby[i]) == roznica) {
            cout << liczby[i] << " ";
        }
    } // koniec kodu od AI

    return 0;
}
