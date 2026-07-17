#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imię: ";
    cin >> imie;

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;

    cout << "Podaj nr telefonu: ";
    cin >> nr_tel;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);
    // input output stream out - pokieruj strumień danych z tego programu do pliku (usuwa to co było w pliku i wstawia nowe)
    // input output stream append - dopisz do istniejącej treści

    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_tel << endl;

    plik.close();

    return 0;
}
