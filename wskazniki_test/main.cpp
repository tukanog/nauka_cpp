#include <iostream>

using namespace std;

int main()
{
    int liczba = 144;
    int *w;
    w = &liczba;

    cout << "Adres zmiennej liczba: " << w << endl;
    cout << "Jej wartość: " << *w << endl;

    return 0;
}
