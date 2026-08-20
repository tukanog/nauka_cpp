#include <iostream>
#include <cmath>

using namespace std;

float kat;

int main()
{
    cout << "Podaj wartosc kata: ";
    cin >> kat;

    cout << sin(kat * M_PI / 180) << endl;
    cout << cos(kat * M_PI / 180) << endl;
    cout << tan(kat * M_PI / 180) << endl;
    cout << 1/tan(kat * M_PI / 180) << endl; // cos()

    return 0;
}