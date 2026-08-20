#include <iostream>
#include <cmath>

using namespace std;

float liczba;

int main()
{
    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Round: " << round(liczba) << endl;
    cout << "Ceil: " << ceil(liczba) << endl;
    cout << "Floor: " << floor(liczba) << endl;
    cout << "Trunc: " << trunc(liczba) << endl; // trunc = truncate = obciąć
    
    return 0;
}