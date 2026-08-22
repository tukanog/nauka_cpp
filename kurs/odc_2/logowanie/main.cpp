#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: " << endl;
    cin >> login;
    cout << "Podaj hasło: " << endl;
    cin >> haslo;

    if (login == "admin" && haslo == "szarlotka") {
        cout << "Zalogowany" << endl;
    }
    else {
        cout << "Nie udało się zalogować!" << endl;
    }

    return 0;
}