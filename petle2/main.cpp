#include <iostream>

using namespace std;

string imie; int liczba;

int main() {

    cout << "Podaj imię: ";
    cin >> imie;
    cout << "Podaj dodatnią liczbę całkowitą: ";
    cin >> liczba;

    for (int i = 1; i <= liczba; i++) {
        cout << i << ". " << imie << endl;
    }

    return 0;
}
