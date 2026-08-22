#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;
double czas;

int main()
{
    cout << "Ile liczb w tablicy?: ";
    cin >> ile;

    int *tablica;
    tablica = new int [ile]; //tutaj stworzyłem pewną tablicę bez nazwy, ale wskaźnik ma jego adres, więc mogę się posługiwać wskaźnikiem, aby dostać się do tej tablicy (co jest też szybsze)

    start = clock();
    for (int i = 0; i < ile; i++) {
        tablica[i] = i;
        tablica[i] += 50;
    }
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << "Czas zapisu (bez wskaźnika): " << czas << endl;

    delete [] tablica;

    int *wskaznik = tablica;
    tablica = new int [ile];

    start = clock();

    for (int i = 0; i < ile; i++)
    {
        *wskaznik = i;
        *wskaznik += 50;
        wskaznik++;
    }
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << "Czas zapisu (z wskaźnikiem): " << czas;

    return 0;
}
