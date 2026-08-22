#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    do {
        cout << "Podaj login: ";
        cin >> login;
        
        if (login == "admin") {
            cout << "Podaj hasło: ";
            cin >> haslo;
            if (haslo == "admin") {
                cout << "Zalogowano pomyślnie!" << endl;
            }
            else {
                cout << "Niepoprawne hasło!" << endl;
            }
        } 
        else cout << "Niepoprawny login!" << endl;

    } while (login != "admin" || haslo != "admin");

    return 0;
}
