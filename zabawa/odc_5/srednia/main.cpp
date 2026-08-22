#include <iostream>

using namespace std;

float oceny[5], suma = 0, srednia;

int main()
{
    for (int i = 0; i <= 4; i++) {
        cout << "Podaj " << i + 1 << ". ocenę: ";
        cin >> oceny[i];
        suma += oceny[i];
    }

    srednia = suma / 5;
    cout << endl << "Twoja średnia wynosi " << srednia << "." << endl;

    return 0;
}
