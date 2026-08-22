#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, proby = 0;

int main()
{
    srand(time(NULL));
    liczba = rand() % 100 + 1;
    cout << "Witaj! Pomyślałem sobie pewną liczbę od 1 do 100." << endl;

    while (strzal != liczba) {
        proby++;

        cout << "Zgadnij jaka to liczba (to twoja " << proby << " próba): ";
        cin >> strzal;

        if (strzal == liczba) {
            cout << "Zgadnąłeś! Wygrywasz w " << proby << " próbię!" << endl;
        } else if (strzal < liczba) {
            cout << "To za mało!" << endl;
        } else {
            cout << "To za dużo!" << endl;
        }
    }

    getchar();

    return 0;
}
