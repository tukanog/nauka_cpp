#include <iostream>

using namespace std;

// Funkcja, która zwraca prawdę (true), gdy liczba jest pierwsza
bool czyPierwsza(int n) {
    if (n < 2) return false; // Liczby mniejsze od 2 nie są pierwsze

    // Zamiast sqrt(n), używamy j * j <= n (dużo szybsze działanie)
    for (int j = 2; j * j <= n; j++) {
        if (n % j == 0) {
            return false; // Znaleźliśmy dzielnik, więc nie jest pierwsza
        }
    }
    return true; // Brak dzielników - liczba jest pierwsza
}

int main() {
    // Magia przyspieszająca wczytywanie i wypisywanie w C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        while (n--) {
            int liczba;
            cin >> liczba;
            
            if (czyPierwsza(liczba)) {
                cout << "TAK\n"; // \n zamiast endl!
            } else {
                cout << "NIE\n";
            }
        }
    }

    return 0;
}