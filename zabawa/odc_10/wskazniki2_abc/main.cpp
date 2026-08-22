#include <iostream>

using namespace std;

float srednia(float &d, float &e, float &f) { // chodzi o to, że np. zmiennej a z funkcji main jest przypisana druga nazwa w funkcji srednia, w tym przypadku d, przez co nie ma dwóch różnych zmiennych o różnych adresach w RAMie, tylko jedna zmienna, która zajmuje mniej miejsca
    cout << d << endl;
    return (d + e + f) / 3;
}

int main()
{
    float a, b, c;

    a = 1.5;
    b = 2.3;
    c = 0.75;

    cout << "Średnia wynosi: " << srednia(a, b, c) << endl;

    return 0;
}
