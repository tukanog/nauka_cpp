#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
    return m * 39.37;
}

float ile_jardow(float x); // w taki sposób możemy wkleić kod funkcji pod funkcją główną, aby nie trzeba było scrollować przez podfunkcje, aby zobaczyć funkcję główną

void ile_mili(float m) // to jest procedura, czyli funkcja, która nie zwraca nic funkcji głównej
{
    cout << "Na mile: " << m * 0.0006213;
}

int main()
{
    cout << "Podaj ile metrów: ";
    cin >> metry;

    cout << "Cale: " << ile_cali(metry) << endl;
    cout << "Jardy: " << ile_jardow(metry) << endl;
    ile_mili(metry);


    return 0;
}

float ile_jardow(float x)
{
    return x * 1.0936;
}
