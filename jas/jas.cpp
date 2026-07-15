#include <iostream>

using namespace std;

int uczniowie, cukierki, cukierki_na_ucznia, cukierki_dla_jasia;

int main()
{
    cout << "Podaj liczbę uczniów w klasie: ";
    cin >> uczniowie;

    cout << "Podaj liczbę cukierków: ";
    cin >> cukierki;

    cukierki_na_ucznia = cukierki / (uczniowie - 1);
    cout << "Każdy uczeń dostanie po " << cukierki_na_ucznia << " cukierki." << endl;

    cukierki_dla_jasia = cukierki - cukierki_na_ucznia * (uczniowie - 1);
    cout << "Dla Jasia zostały " << cukierki_dla_jasia << " cukierki." << endl;

    return 0;
}
