#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witaj w losowaniu! Za 3 sekundy nastąpi zwolnienie blokady." << endl;
    sleep(3);
    cout << endl;
    srand(time(NULL));

    for (int i = 1; i <= 6; i++) {
        liczba = rand()%49 + 1;
        cout << liczba << "\a" << endl;
        sleep(1);
    }
    return 0;
}
