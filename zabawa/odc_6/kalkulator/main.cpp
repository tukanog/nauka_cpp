#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

float x, y;
char wybor;

int main()
{
    for (;;) {
        cout << "Podaj 1. liczbę: ";
        cin >> x;
        cout << "Podaj 2. liczbę: ";
        cin >> y;

        cout << endl;
        cout << "MENU GLOWNE" << endl;
        cout << "-------------" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnożenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "5. Wyjdź" << endl;

        cout << endl;
        wybor = getch();

        switch(wybor) {
            case '1':
                cout << "Suma = " << x + y;
            break;

            case '2':
                cout << "Odejmowanie = " << x - y;
            break;

            case '3':
                cout << "Iloczyn = " << x * y;
            break;

            case '4':
                if (y == 0) cout << "Nie dzielimy przez 0!";
                else cout << "Iloraz = " << x / y;
            break;

            case '5':
                    exit(0);
            break;

            default:
                cout << "Nie ma takiej opcji!";
        }
        getchar(); getchar();
        system("clear");
    }
    return 0;
}
